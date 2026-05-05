# C Preprocessor Example

A simple project demonstrating how to use C preprocessor directives (`#define`, `#ifdef`, `#include`) to control code logic.

## How it works
The code logic changes based on which macros you define in `define_example.c`:

*   **Define `loop1` only:** Prints numbers from 1 to 10.
*   **Define `loop2` only:** Prints the square of numbers (i * i).
*   **Define both:** Runs nested loops to print a multiplication table.

## Files
1. `define_example.c`: The main entry point (where you define the loops).
2. `define_example.a.c`: Contains the logic for the first loop.
3. `define_example.b.c`: Contains the logic for the second loop.

## Usage
Simply uncomment the `#define` lines in `define_example.c` and compile:

```bash
gcc define_example.c -o example
./example
```
