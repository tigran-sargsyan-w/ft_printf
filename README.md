# ft_printf

![42 Logo](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTXfAZMOWHDQ3DKE63A9jWhIqQaKcKqUIXvzg&s)

`ft_printf` is a custom implementation of the standard `printf` function in C. This project was developed to practice the understanding of variable arguments, formatting specifiers, and the internal workings of the `printf` function.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)

## Description

`ft_printf` is designed to provide similar functionality to the standard `printf` function, supporting various format specifiers and flags. It accepts a format string and a variable number of arguments, then outputs the corresponding formatted result.

The goal of this project is to deepen the understanding of C's variadic functions and enhance the use of pointers and memory management.

## Features

- Supports common format specifiers like `d`, `i`, `s`, `c`, `u`, `x`, `X`, and `p`.
- Custom implementation of `printf` using variadic arguments.
- Can handle both upper and lower case hexadecimal outputs.
- Provides precise and efficient memory usage.

## Installation

To compile and use `ft_printf`, follow these steps:

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/yourusername/ft_printf.git
   ```
2. Navigate into the project directory:
   ```bash
   cd ft_printf
   ```
3.Compile the project using make:
  ```bash
  make
  ```
## Usage

To use ft_printf, include the ft_printf.h header in your C program and link with the libftprintf.a library.
```c
#include "ft_printf.h"

int main() {
    int num = 42;
    char str[] = "Hello, world!";
    
    ft_printf("Number: %d\n", num);
    ft_printf("String: %s\n", str);
    return 0;
}
```

## Supported Format Specifiers

`ft_printf` supports the following format specifiers:

- **`%c`** - Print a single character.
- **`%s`** - Print a string of characters.
- **`%d`, `%i`** - Print a signed decimal integer.
- **`%u`** - Print an unsigned decimal integer.
- **`%x`** - Print an unsigned hexadecimal integer (lowercase).
- **`%X`** - Print an unsigned hexadecimal integer (uppercase).
- **`%p`** - Print a pointer (address in hexadecimal).
- **`%%`** - Print a literal percent sign.

