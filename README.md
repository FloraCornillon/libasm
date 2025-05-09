# Libasm

This is one of the first low-level projects at 42 school. The goal is to reimplement basic C standard functions using x86-64 assembly with NASM.

You can find the project subject [here](./en.subject.pdf).

## How to Use

Clone the repository and compile the object files:

```bash
git git@github.com:FloraCornillon/libasm.git
cd libasm
make
```

You can test the functions using your own `main.c` or provided test files:

```bash
gcc -Wall -Wextra -Werror main.c libasm.a
```

> Note: Ensure you are on a Linux machine using x86_64 architecture. This project does not run on macOS.

## Skill Practice

- Basics of x86-64 assembly (NASM syntax)  
- Calling conventions and low-level operations  
- Manual implementation of C standard functions (`strlen`, `strcpy`, `strcmp`, etc.)  
- Static library creation and linking with assembly code  
- Use of a Makefile