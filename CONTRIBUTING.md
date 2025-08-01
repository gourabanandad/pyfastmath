# 🤝 Contributing to pyfastmath

First off, thanks for taking the time to contribute! 🙌
Whether it's fixing a bug, adding a feature, or improving docs — all contributions are welcome.

---

## 🧰 Getting Started

### 1. Fork the Repository

Click the "Fork" button in the top-right corner of this repo, and clone your fork locally:

```bash
git clone https://github.com/your-username/pyfastmath.git
cd pyfastmath
```

### 2. Create a New Branch

```bash
git checkout -b your-feature-name
```

---

## ⚒ What You Can Contribute

* 🐞 Bug fixes
* 🚀 New math functions (in C or Python)
* 🧪 Unit tests for core functions
* 📝 Docs or example scripts
* 🌍 Translations or usage in other environments (Replit, Docker, etc.)

---

## 🛆 Building the C Extension

Make sure you can build the C extension locally:

```bash
python setup.py build
```

Install it for local testing:

```bash
pip install -e .
```

Test it out:

```python
import _pyfastmath
print(_pyfastmath.gcd(24, 16))  # ➔ 8
```

---

## 🦪 Writing Tests

Add any new tests under a `tests/` folder using `unittest` or `pytest`.

---

## 📬 Submitting Your PR

1. Push your changes:

```bash
git push origin your-feature-name
```

2. Open a Pull Request:

* Explain your change clearly
* Mention related issue numbers (if any)
* Add test or example usage if possible

---

## ❤️ Code of Conduct

Please be kind and respectful. We're all learning here.

---

## 🙏 Thank You

By contributing, you’re making `pyfastmath` better for everyone!
We’ll add your name to [CONTRIBUTORS.md](CONTRIBUTORS.md) when your PR is merged 🎉
