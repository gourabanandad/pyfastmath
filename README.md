# pyfastmath

🚀 **pyfastmath** is a blazing-fast math utility module for Python, written in C for maximum performance.
It includes essential number-theoretic functions like GCD, primality checking, and modular exponentiation.

---

## ✨ Features

* 🟰 `gcd(a, b)` – Compute the Greatest Common Divisor of two integers
* 🔍 `is_prime(n)` – Efficiently check if a number is prime
* 🔐 `mod_exp(base, exp, mod)` – Perform Modular Exponentiation: (base^exp) % mod

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
```

---

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

## 👨‍💻 Author

Built with ❤️ by **Gourabananda Datta**
B.Tech CSE, Ramkrishna Mahato Government Engineering College
