# Pattern Package

This is a small Python package for practicing star and number patterns.

The pattern functions are kept separate from the user input code, so they
can be imported and reused in other Python programs.

## Project structure

```text
pattern_package/
├── __init__.py
├── patterns.py
└── cli.py
```

- `patterns.py` contains the pattern functions.
- `cli.py` runs the program from the terminal.
- `__init__.py` makes the functions available from the package.

## Install locally

Open PowerShell in this folder and run:

```powershell
python -m pip install -e .
```

## Use the package

You can import a pattern into another Python file:

```python
from pattern_package import pattern_7

pattern_7(5)
```

## Run the command-line program

From the `Python_pattern` folder, run:

```powershell
python -m pattern_package.cli
```

The program will ask how many patterns you want to print and what size each
pattern should be.

On Windows, `pattern-cli` may not work immediately if Python's Scripts folder
is not included in your `PATH`. The `python -m` command above avoids that
problem.