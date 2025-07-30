import os
from setuptools import setup, Extension, find_packages

# Read the contents of your README file
this_directory = os.path.abspath(os.path.dirname(__file__))
with open(os.path.join(this_directory, 'README.md'), encoding='utf-8') as f:
    long_description = f.read()

# Define the C extension module
# 'pyfastmath._pyfastmath' is the name of the compiled C module.
# The actual Python module will be 'pyfastmath' which imports from '_pyfastmath'.
pyfastmath_module = Extension(
    'pyfastmath._pyfastmath', # The name of the compiled extension module (e.g., pyfastmath/_pyfastmath.so)
    sources=['pyfastmath/pyfastmath.c'] # Path to your C source file from setup.py's location
   
)

setup(
    name='pyfastmath', # The name of your package on PyPI
    version='1.0.1', # Current version of your package
    author='Gourabananda Datta', # Your name
    author_email='gourabanandadatta@gmail.com', # Your email
    description='High-performance math functions implemented in C for Python.', # Short description
    long_description=long_description, # Long description from README.md
    long_description_content_type='text/markdown', # Specify content type for README
    url='https://github.com/gourabanandad/pyfastmath', # URL to your project's repository (update if needed)
    packages=find_packages(), # Automatically finds Python packages (e.g., 'pyfastmath')
    ext_modules=[pyfastmath_module], # List of C extension modules to build
    classifiers=[
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
        'Programming Language :: Python :: 3.9',
        'Programming Language :: Python :: 3.10',
        'Programming Language :: Python :: 3.11',
        'Programming Language :: Python :: 3.12',
        'Programming Language :: C', # Indicate that it contains C code
        'License :: OSI Approved :: MIT License',
        'Operating System :: OS Independent',
        'Development Status :: 3 - Alpha', # Indicate the development status
        'Intended Audience :: Developers',
        'Topic :: Software Development :: Libraries :: Python Modules',
        'Topic :: Scientific/Engineering :: Mathematics',
    ],
    python_requires='>=3.6', # Minimum Python version required
)
