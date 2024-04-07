# 0x11. C - printf

## Project Overview
This group project was conducted by Carl Birkenstock and Keegan Joubert, focusing on creating a custom `printf` function from scratch. The project combined understanding of C programming, use of standard input and output libraries, and efficient memory management. The development span took place from November 10, 2023, to November 15, 2023.

## Objectives
- To replicate the functionality of the standard library `printf` function.
- To handle conversion specifiers for printing different types of data.
- To manage memory allocation and deallocation effectively.

## Resources

### Read or Watch:
- [Secrets of printf](https://www.cypress.com/file/54761/download)
- [Group Projects concept page](https://intranet.hbtn.io/concepts/111)
- [Flowcharts concept page](https://intranet.hbtn.io/concepts/130)
- Man pages: `printf (3)`

## Requirements

### General
- **Development Environment:** Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Each file should end with a new line.
- A `README.md` file is mandatory at the root of the project.
- Code should conform to the Betty style.
- Global variables are forbidden.
- No more than 5 functions per file are allowed.
- The project should include a header file `main.h` with all function prototypes, which must be include guarded.

### GitHub
- One repository per group is required. Other members should not fork the project to avoid duplicated effort.

### Authorized functions and macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

## Compilation
- Compiled with: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
- The project includes comprehensive testing against the standard `printf` to ensure compatibility and correctness.

## Example Usage
The custom `_printf` function aims to mimic the standard `printf` behavior as closely as possible, including handling various data types and formats. The following is an example of its usage:

```c
#include "main.h"

int main(void) {
    _printf("Custom printf test:\n");
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, world");
    _printf("Integer: %d\n", 123);
    _printf("Percent sign: %%\n");
    return 0;
}
