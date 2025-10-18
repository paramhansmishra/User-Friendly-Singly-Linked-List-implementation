# User-Friendly-Singly-Linked-List-implementation
  Singly Linked List in C++

A simple implementation of a **Singly Linked List (SLL)** in C++ using raw pointers and dynamic memory allocation. The project provides an **interactive menu-based interface** to perform basic linked list operations without using STL containers like `std::list`.

---

## Features

- ✅ **AddNodeAtEnd(value)** – Insert a new node at the end  
- ✅ **Traverse()** – Display all nodes in `val -> val -> NULL` format  
- ✅ **AddAfter(target, value)** – Insert a new node *after* a specific element

---

## How It Works

- Each node is represented by a custom `Node` class containing:
  - `int val` → data  
  - `Node* next` → pointer to the next node

- The `SLL` class manages:
  - `Node* head` pointer  
  - All linked list operations

- The program runs inside an **infinite input loop**, allowing users to continuously add and view elements.

---

## Usage
- Things you can do :

  - AddNodeAtEnd(value)

  - traverse()

  - AddAfter(after, value)

---

## Purpose

This project is intended for **learning pointer manipulation and data structure fundamentals** without relying on STL abstractions. It reinforces:

- Manual memory handling using `new`  
- Pointer traversal logic  
- Basic linked list insertion techniques
