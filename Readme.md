# C++ Module 08

## Overview

This module explores advanced concepts in C++ programming, focusing on templated containers, iterators, and algorithms. The goal is to understand and implement custom containers and extend their functionality using the Standard Template Library (STL).

---

## C++ Standard Template Library (STL)

The C++ Standard Template Library (STL) is a set of template classes and functions that provides the implementation of common data structures and algorithms such as lists, stacks, arrays, sorting, searching, etc. It also provides iterators and functors, which make it easier to work with algorithms and containers.

### Containers

Containers are the data structures used to store objects and data according to the requirement. A container manages the storage space for its elements and provides member functions for easy access to useful operations.

Containers can be further classified into 4 types:

1. **Sequence Containers**:
   - **Array**: Container that wraps over a fixed-size static array.
   - **Vector**: Automatically resizable dynamic array.
   - **Deque**: Dynamic array of fixed-size arrays that allows fast insertions and deletions at both ends.
   - **List**: Implementation of a doubly linked list.
   - **Forward List**: Implementation of a singly linked list.

2. **Associative Containers**:
   - **Set**: Collection of unique elements sorted by value.
   - **Map**: Collection of key-value pairs sorted by keys.
   - **Multiset**: Allows duplicate elements, sorted by value.
   - **Multimap**: Allows duplicate keys, sorted by keys.

3. **Unordered Associative Containers**:
   - **Unordered Set**: Collection of unique elements hashed by value.
   - **Unordered Map**: Collection of key-value pairs hashed by keys.
   - **Unordered Multiset**: Allows duplicate elements, hashed by value.
   - **Unordered Multimap**: Allows duplicate keys, hashed by keys.

4. **Container Adapters**:
   - **Stack**: Adapts a container to provide a stack (LIFO) data structure.
   - **Queue**: Adapts a container to provide a queue (FIFO) data structure.
   - **Priority Queue**: Adapts a container to provide a heap-based priority queue.

---

### Algorithms

STL algorithms offer a wide range of functions to perform common operations on data (mainly containers). These functions implement the most efficient version of the algorithm for tasks such as sorting, searching, modifying, and manipulating data in containers. All STL algorithms are defined inside the `<algorithm>` and `<numeric>` header files.

#### Manipulative Algorithms

Manipulative algorithms perform operations that modify the elements of the given container or rearrange their order. Some common manipulative algorithms include:
- `copy`: Copies a specific number of elements from one range to another.
- `fill`: Assigns a specified value to all elements in a range.
- `transform`: Applies a function to each element in a range and stores the result in another range.
- `replace`: Replaces all occurrences of a specific value in a range with a new value.
- `swap`: Exchanges the values of two variables.
- `reverse`: Reverses the order of elements in a range.
- `rotate`: Rotates the elements in a range such that a specific element becomes the first.
- `remove`: Removes all elements with a specified value from a range but does not reduce the container size.
- `unique`: Removes consecutive duplicate elements from a range.

#### Non-Manipulative Algorithms

Non-manipulative algorithms operate on elements in a range without altering their values or the order of the elements. Examples include:
- `max_element`: Finds the maximum element in the given range.
- `min_element`: Finds the minimum element in the given range.
- `accumulate`: Finds the sum of the elements of the given range.
- `count`: Counts the occurrences of a given element in the range.
- `find`: Returns an iterator to the first occurrence of an element in the range.
- `is_permutation`: Checks if one range is a permutation of another.
- `is_sorted`: Checks if the elements in a range are sorted in non-decreasing order.
- `partial_sum`: Computes the cumulative sum of elements in a range.

---

### Iterators

Iterators are pointer-like objects that are used to point to the memory addresses of STL containers. They are one of the most important components that connect STL algorithms with containers. Iterators are defined inside the `<iterator>` header file.

In C++ STL, iterators are of 5 types:
- **Input Iterators**: Can be used to read values from a sequence once and only move forward.
- **Output Iterators**: Can be used to write values into a sequence once and only move forward.
- **Forward Iterators**: Combine the features of both input and output iterators.
- **Bidirectional Iterators**: Support all operations of forward iterators and can also move backward.
- **Random Access Iterators**: Support all operations of bidirectional iterators and provide efficient random access to elements.

---

## Project Breakdown

### ex00: EasyFind

- Implement a function `easyfind` that searches for a specific value in a container.
- Use `std::find` to locate the value and throw an exception if not found.
- Demonstrates the use of STL algorithms and iterators.

---

### ex01: Span

- Implement a class `Span` that stores a collection of integers and provides:
  - `addNumber`: Adds a single number to the collection.
  - `addRange`: Adds a range of numbers using iterators.
  - `shortestSpan`: Finds the smallest difference between any two numbers.
  - `longestSpan`: Finds the largest difference between any two numbers.
- Demonstrates the use of iterators, STL algorithms, and exception handling.

---

### ex02: MutantStack

- Implement a `MutantStack` class that extends `std::stack` to provide iterators.
- Key features:
  - Inherits from `std::stack`.
  - Exposes iterators (`begin`, `end`, `rbegin`, `rend`) of the underlying container (`std::deque` by default).
- Demonstrates:
  - Template inheritance.
  - Accessing protected members of `std::stack` (the underlying container `c`).
  - Iterating over a stack-like container.
