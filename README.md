# Library Management System

A console-based Library Management System developed using C++. This project allows users to manage book records through a menu-driven interface and stores book information in a text file using file handling.

## Features

- **Show All Books:** Display all available book records stored in the file.
- **Add Books:** Add new books by entering Book ID, Book Name and Author Name.
- **Extract Book:** Search for a book using its Book ID and display its details.
- **Search Book:** Search for books by Book Name or Author Name.
- **File Handling:** Store and retrieve book records using `bookData.txt`.

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- File Handling (`fstream`)
- Standard Input/Output (`iostream`)

## Concepts Implemented

- Classes and Objects
- Member Functions
- Encapsulation
- Switch Statements
- Loops and Conditional Statements
- File Handling
- String Handling
- Reading and Writing Data Using Files

## Project Structure

```text
LibraryManagementSystem/
│
├── LibraryManagementSystem.cpp
├── bookData.txt
└── README.md
```

`bookData.txt` is created automatically when books are added.

## How to Run the Project

**Prerequisite:** A C++ compiler such as GCC (g++).

1. Clone or download this repository.
2. Open the project folder in VS Code.
3. Open the terminal in the project directory.
4. Compile the source code:

```bash
g++ LibraryManagementSystem.cpp -o LibraryManagementSystem
```

5. Run the application:

**Windows:**
```bash
LibraryManagementSystem.exe
```

**Linux/macOS:**
```bash
./LibraryManagementSystem
```

## Application Menu

```text
----------------------------------
1-Show All Books
2-Extract Book
3-Add books(ADMIN)
4-Search Book
5-Exit
----------------------------------
Enter Your Choice ::
```

## Data Storage

Book records are stored in a local text file named `bookData.txt`.

Each record follows this format:

```text
BookID*BookName*AuthorName
```

Example:

```text
101*The Alchemist*Paulo Coelho
```

The application uses file handling to append new book records and retrieve existing records.

## Important Note

This is a beginner-level, console-based C++ project demonstrating object-oriented programming and file handling.

The Extract Book option currently searches for and displays a matching book record. It does not remove the book from the file or maintain borrowing/return status. The ADMIN label is a menu label; administrator authentication is not implemented.

## Author

**Divyanshi Sahu**

GitHub: https://github.com/DivyanshiSahu1011
