# pyfastmath

🚀 **pyfastmath** is a blazing-fast math utility module for Python, written in C for maximum performance.
It includes essential number-theoretic functions like GCD, primality checking, modular exponentiation and many more. Check below for more information about the features.

---

## ✨ Features

*  `gcd(a, b)` – Compute the Greatest Common Divisor of two integers
*  `is_prime(n)` – Efficiently check if a number is prime
*  `mod_exp(base, exp, mod)` – Perform Modular Exponentiation: (base^exp) % mod
*  `lcm(a, b)` – Calculate the Lowest Common Multiplicant
*  `factorial(n)` – Calculate the factorial of a positive integer
*  `ncr(n, r)` – Calculate the combination of two number(nCr)
*  `npr(n, r)` – Calculate the permutation of two number(nPr)

---

## ⚙️ Installation

After building locally:

```bash
pip install .
```

> Or after uploading to PyPI:

```bash
pip install pyfastmath
```

---

## 🧪 Usage

```python
import pyfastmath

print(pyfastmath.gcd(48, 18))         # ➝ 6
print(pyfastmath.is_prime(97))        # ➝ True
print(pyfastmath.mod_exp(2, 10, 100)) # ➝ 24
print(pyfastmath.lcm(48, 18))         # ➝ 144
print(pyfastmath.factorial(5))        # ➝ 120
print(pyfastmath.ncr(5,2))            # ➝ 10
print(pyfastmath.npr(5, 2))           # ➝ 20
```

---
## Documentation

See the full documentation from here [Docs](https://gourabanandad.github.io/pyfastmath/)

## 🚧 Requirements

* Python 3.6 or higher
* C compiler (e.g. gcc, clang, MSVC)

---

## 💠 Build from Source

```bash
python setup.py sdist bdist_wheel
pip install dist/pyfastmath-<version>.whl
```

---

## 📦 Distribute via PyPI

```bash
pip install twine
twine upload dist/*
```

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---
## Contribution
See the contribution guidelines [guidelines](CONTRIBUTING.md)


## 👨‍💻 Author

Built with ❤️ by **Gourabananda Datta**
B.Tech CSE, Ramkrishna Mahato Government Engineering College
