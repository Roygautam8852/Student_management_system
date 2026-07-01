# Student Record Management System

A simple **Student Record Management System** developed in **C++** using a **Singly Linked List**. This project demonstrates the practical implementation of core Data Structures and Object-Oriented Programming concepts by allowing users to manage student records through various CRUD operations.

## Features

* Add new student records
* View all student records
* Search a student by Roll Number
* Delete a student record
* Sort records by Roll Number using Bubble Sort
* Dynamic memory allocation using linked lists
* Modular function-based implementation

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Singly Linked List
* Dynamic Memory Allocation

## Project Structure

```
Student-Record-Management-System/
│
├── main.cpp          # Complete source code
├── README.md         # Project documentation
```

## Student Record

Each student record contains the following information:

* Roll Number
* Name
* Email ID
* Course Name

## Operations

### 1. Add Student

Creates a new student record and inserts it at the end of the linked list.

### 2. View Records

Displays all student records stored in the system.

### 3. Search Student

Searches for a student using their Roll Number.

### 4. Delete Student

Deletes a student record by Roll Number while maintaining the linked list structure.

### 5. Sort Records

Sorts all student records in ascending order of Roll Number using the Bubble Sort algorithm.

## How to Run

### Clone the Repository

```bash
git clone https://github.com/your-username/Student-Record-Management-System.git
```

### Compile

```bash
g++ main.cpp -o student_record
```

### Run

```bash
./student_record
```

For Windows (MinGW):

```bash
g++ main.cpp -o student_record.exe
student_record.exe
```

## Sample Output

```
How many records do you want to add? 2

Enter 1st record
Roll Number: 101
Name: Gautam
Email ID: gautam@gmail.com
Course Name: CSE

Enter 2nd record
Roll Number: 103
Name: Rahul
Email ID: rahul@gmail.com
Course Name: AI

View Records

Roll Number: 101
Name: Gautam
Email ID: gautam@gmail.com
Course Name: CSE

Roll Number: 103
Name: Rahul
Email ID: rahul@gmail.com
Course Name: AI
```

## Data Structure Used

The project uses a **Singly Linked List** where each node stores:

* Roll Number
* Name
* Email ID
* Course Name
* Pointer to the next node

This approach enables dynamic memory allocation without requiring a fixed-size array.

## Learning Outcomes

This project helped strengthen understanding of:

* Linked Lists
* Pointers
* Dynamic Memory Allocation
* Functions and Modular Programming
* Object-Oriented Programming in C++
* Searching and Sorting Algorithms
* CRUD Operations

## Future Improvements

* Update student details
* File handling for persistent storage
* Search by student name
* Sort by name
* Duplicate Roll Number validation
* Menu-driven interface
* Input validation
* Binary Search Tree or Hash Map implementation for faster searching

## Author

**Gautam Kumar**

If you found this project useful, feel free to star the repository.
