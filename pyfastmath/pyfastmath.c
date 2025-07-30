#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // For bool type, though fastmath.h also includes it
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "pyfastmath.h" // <--- Include your header file here!

// --- C Helper Functions (Your original implementations - Definitions provided here) ---

long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool is_prime(unsigned long long int a) {
    if (a <= 1) return false;
    if (a <= 3) return true;
    if (a % 2 == 0 || a % 3 == 0) return false;
    for (unsigned long long int i = 5; i * i <= a; i = i + 6) {
        if (a % i == 0 || a % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

// --- Python Wrapper Functions ---

static PyObject* py_gcd(PyObject* self, PyObject* args) {
    long long int a, b;
    if (!PyArg_ParseTuple(args, "LL", &a, &b)) {
        return NULL;
    }
    long long int result = gcd(a, b);
    return Py_BuildValue("L", result);
}

static PyObject* py_is_prime(PyObject* self, PyObject* args) {
    unsigned long long int n;
    if (!PyArg_ParseTuple(args, "K", &n)) {
        return NULL;
    }
    bool result = is_prime(n);
    if (result) {
        Py_RETURN_TRUE;
    } else {
        Py_RETURN_FALSE;
    }
}

static PyObject* py_mod_exp(PyObject* self, PyObject* args) {
    long long base, exp, mod;
    if (!PyArg_ParseTuple(args, "LLL", &base, &exp, &mod)) {
        return NULL;
    }
    return Py_BuildValue("L", mod_exp(base, exp, mod));
}

// --- Method Definition Table ---

static PyMethodDef FastMathMethods[] = {
    {"gcd", (PyCFunction)py_gcd, METH_VARARGS, "Compute the GCD of two numbers."},
    {"is_prime", (PyCFunction)py_is_prime, METH_VARARGS, "Check if a number is prime."},
    {"mod_exp", (PyCFunction)py_mod_exp, METH_VARARGS, "Compute (base^exp) % mod using modular exponentiation."},
    {NULL, NULL, 0, NULL}
};

// --- Module Definition Structure ---

static struct PyModuleDef fastmathmodule = {
    PyModuleDef_HEAD_INIT,
    "fastmath",     // Name of module
    "High-performance math functions in C for Python.", // Module docstring
    -1,
    FastMathMethods
};

// --- Module Initialization Function ---

PyMODINIT_FUNC PyInit_fastmath(void) {
    return PyModule_Create(&fastmathmodule);
}