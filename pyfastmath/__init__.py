# pyfastmath/__init__.py

# Import the functions from the compiled C extension module
# The C extension will be named '_pyfastmath' when compiled.
from .pyfastmath import gcd, is_prime, mod_exp

# Define what gets imported when a user does 'from pyfastmath import *'
__all__ = ['gcd', 'is_prime', 'mod_exp']
