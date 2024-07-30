# Printf

A custom implementation of the C standard library function `printf`.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Formats](#supported-formats)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## Introduction

This project is a custom implementation of the `printf` function in C. It aims to replicate the functionality of the standard library `printf` function, allowing formatted output to the standard output stream.

## Features

- Supports various format specifiers
- Handles flags, width, precision, and length modifiers
- Error handling

## Installation

To install and use the custom `printf` function, follow these steps:
1. Clone the repository:
    ```sh
    git clone https://github.com/Ismaelbill/printf.git
    ```
2. Navigate to the project directory:
    ```sh
    cd printf
    ```
3. Compile the source code:
    ```sh
    gcc -Wall -Werror -Wextra -pedantic *.c -o printf
    ```

## Usage

To use the custom `printf` function in your projects, include the `main.h` header file and compile your code with the `printf` implementation files. Here is an example:
```c
    #include "main.h"

    int main(void)
    {
        _printf("Hello, world!\n");
        return (0);
    }
```
Run the compiled executable:
```sh
    ./printf
```

## Supported Formats

The custom printf function supports the following format specifiers:
  - %c: Character
  - %s: String
  - %d: Signed decimal integer
  - %i: Signed decimal integer
  - %u: Unsigned decimal integer
  - %o: Unsigned octal
  - %x: Unsigned hexadecimal (lowercase)
  - %X: Unsigned hexadecimal (uppercase)
  - %%: Percent sign

## Acknowledgements

- This project was inspired by the need to understand and implement a core function of the C standard library.
- Special thanks to all the contributors who helped in improving this project.
