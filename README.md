# Data Structures and Algorithms

This repository contains my practice work while learning data structures and
algorithms with Python, Java, and C++.

## Repository contents

### Python

- `Day_5/` - stock profit, longest consecutive streak, and array rotation.
- `Day_6/` - removing duplicates from a sorted array and the Two Sum problem.
- `Day_7/` - squaring a sorted array with the two-pointer technique.
- `Day_8/` - subsequence checking and finding common values in sorted arrays.
- `lecture_4/` - Python arrays and user input.
- `lecture_5/` - array traversal, updates, reversing, moving zeroes, and
  comparisons.
- `Longest_substring/` - longest substring without repeated characters and
  shortest subarray with a target sum.
- `Old_Practice/` - earlier sliding-window practice.
- `Python_pattern/` - a small installable package for star and number patterns.
- `Sliding_windows/` - fixed-size and variable-size sliding-window problems.
- `swiping/` - swapping two values.

### Java

- `lecture_1/` - a basic Hello World program.
- `lecture_2/` - condition, comparison, and switch statement examples.
- `lecture_3/` - `for`, `while`, and `do-while` loop examples.

### C++

- `CPP/Pattern/` - square, triangle, and number pattern exercises.
- `lecture_6/` - arrays, functions, and passing strings by reference.
- `lab task/` - programs for creating email addresses, using a calculator,
  linear search, and bubble sort.
- `Stack/` - a fixed-size stack with push, pop, and display operations.

Compiled files such as `.exe` and `.class` files are also present in some
folders as local build output.

## Topics practiced

- Arrays and array traversal
- Two-pointer techniques
- Sliding-window techniques
- Searching and sorting
- Array rotation, reversal, and duplicate removal
- Subsequence and common-element problems
- Stacks
- Conditions, loops, functions, and references
- Console input and output
- Pattern printing

## Running the programs

Run commands from the repository root.

### Python

```bash
python Day_6\TwoSum.py
python Longest_substring\code.py
python Sliding_windows\code.py
```

Use the relevant file path to run another Python exercise. Some programs
request input from the terminal.

### Python pattern package

The `Python_pattern` folder is organized as a small Python package. Its
reusable pattern functions are in `pattern_package\patterns.py`, while the
interactive program is in `pattern_package\cli.py`.

From the repository root, install the package in editable mode:

```powershell
cd Python_pattern
python -m pip install -e .
```

Run the interactive pattern program with:

```powershell
python -m pattern_package.cli
```

The program asks how many patterns to print and the size of each pattern.
You can also import a pattern into another Python file:

```python
from pattern_package import pattern_7

pattern_7(5)
```

Using `python -m pattern_package.cli` is recommended on Windows because the
installed `pattern-cli` command may not be available if Python's Scripts
folder is not included in `PATH`.

### Java

Compile and run a Java file from the repository root:

```bash
javac lecture_1\Helloworld.java
java -cp lecture_1 Helloworld
```

### C++

Compile a source file with a C++ compiler, then run the generated executable:

```bash
g++ "lab task\task_1.cpp" -o "lab task\task_1.exe"
& ".\lab task\task_1.exe"
```

The exact executable command may vary by operating system and compiler.

## Note

These are learning exercises, so some files contain commented-out examples or
experiments. The repository will continue to grow as I practice more data
structures and algorithms.
