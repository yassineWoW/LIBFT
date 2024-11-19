# Libft - 42 Project

![Libft Badge](https://img.shields.io/badge/42%20Project-Libft-blue)

## 📝 Description

**Libft** is the first project of the **42 cursus**. It involves creating a custom library of functions in C that replicate some of the standard library functions, as well as additional utility functions commonly used in software development. This project serves as a foundation for many future projects in the 42 curriculum.

By completing this project, you'll:
- Gain a deeper understanding of how basic C functions work.
- Build reusable, efficient, and modular code.
- Lay the groundwork for future projects that rely on this library.

## 📁 Project Structure

The project is divided into the following parts:
1. **Libc Functions**: Reimplementation of standard C library functions like `strlen`, `strcpy`, `memset`, etc.
2. **Additional Functions**: Custom utility functions such as `ft_itoa`, `ft_split`, etc., to perform common operations.
3. **Bonus Part** (Optional): Functions for handling linked lists (e.g., `ft_lstnew`, `ft_lstadd_front`, etc.).

## 🚀 Getting Started

### Prerequisites
To compile and use this library, you'll need:
- GCC (or any C compiler in my case I used cc as a subject requirement)
- `make` utility

### Installation
1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/yassineWoW/libft.git
   cd libft

Compile the library:
bash
make
This will generate a libft.a file in the root directory, which is the static library you can link against in your projects.

## 📜 Usage
Include the libft.h header file in your C project:

c
#include "libft.h"
Compile your project with the libft.a library:


Run your program:

### 🔧 Available Functions
Below is a categorized list of all the functions provided by Libft.

### 🛠️ Libc Functions

Function Name	Description
ft_strlen	Returns the length of a string.
ft_strcpy	Copies a string from source to destination.
ft_memset	Fills memory with a constant byte.
ft_bzero	Sets memory to zero.
ft_memcpy	Copies memory area.
...	More functions as per the project subject.

### ➕ Additional Functions

Function Name	Description
ft_itoa	Converts an integer to a string.
ft_split	Splits a string into an array of words.
ft_strjoin	Concatenates two strings.
ft_strtrim	Trims specified characters from a string.
...	More functions as per the project subject.

### 🔗 Bonus Functions (Optional)

Function Name	Description
ft_lstnew	Creates a new linked list node.
ft_lstadd_front	Adds a node to the front of a linked list.
ft_lstsize	Counts the number of nodes in a linked list.
ft_lstclear	Deletes and frees all nodes in a linked list.
...	Additional linked list utilities.

## 📄 Project Rules

Mandatory Part: Implement all required libc and additional functions according to the 42 subject guidelines.
Code Norm: All code must comply with the 42 Norm:
No for-loops or switch-case statements.
No global variables.
Makefile: The project must include a Makefile with the following rules:
make - Build the library.
make clean - Remove object files.
make fclean - Remove object files and the compiled library.
make re - Rebuild the library.

# 📚 Learning Outcomes

By completing this project, you will:

Understand fundamental algorithms and memory manipulation in C.
Develop a reusable C library that can be used in other projects.
Practice writing clean, modular, and efficient code that adheres to strict coding standards.

# 🏆 Grading Tips

To ensure you pass the evaluation:

Test Thoroughly: Write test programs to validate each function.
Check Norm Compliance: Use the norminette tool to ensure your code meets the 42 Norm.
Handle Edge Cases: Test with empty strings, NULL inputs, and unusual values.
Prepare for Questions: Be ready to explain how each function works during the peer evaluation.

# 📂 Files Overview

File	Description
libft.h	Header file containing all function prototypes.
Makefile	Script to build, clean, and rebuild the library.
*.c files	Source files for all implemented functions.
*.o files	Object files generated during compilation.

### 🖋️ LAST TOUGHTS

This project was developed by Yassine Imizare AKA yimizare, as part of the 42 Cursus. For any questions or suggestions, feel free to reach out!
