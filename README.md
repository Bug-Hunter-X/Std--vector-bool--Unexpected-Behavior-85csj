# std::vector<bool> Unexpected Behavior

This example demonstrates a common pitfall when using `std::vector<bool>` in C++.  Because `std::vector<bool>` is specialized for memory optimization, it doesn't behave exactly like `std::vector<T>` for other types. Accessing its elements using the `[]` operator might not return the expected boolean value.

## Bug Report

The `bug.cpp` file demonstrates the unexpected behavior.  The code attempts to store and retrieve boolean values using `std::vector<bool>`, but the retrieved values may be incorrect due to the specialization.

## Solution

The `bugSolution.cpp` file provides a solution. Instead of using `std::vector<bool>`, it uses a regular `std::vector<bool>` to store the boolean values which behaves predictably. Alternatively, you might consider bitset to improve memory usage without unexpected behavior.