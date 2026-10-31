# IIIT-H Initial Code

> 94 data structures and algorithms practice problems in C++, solved at the start of my M.Tech at IIIT Hyderabad.

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Problems](https://img.shields.io/badge/problems-94-informational?style=flat-square)
![Topic](https://img.shields.io/badge/topic-DSA-blueviolet?style=flat-square)

## Overview

I wrote these solutions in July and August 2021, as I was starting the M.Tech in Computer Science at IIIT Hyderabad, to brush up on core data structures and algorithms before coursework began.

Most problems are standard interview and practice questions, and their titles follow the GeeksforGeeks practice problem names. The `Competition` folder holds a few contest-style problems. Every solution is a single, self-contained `.cpp` file with its own `main()` that reads input from standard input and prints the answer.

A few files (for example *Quadratic Equation Roots*, *Maximum subset XOR* and *Modular Multiplicative Inverse*) follow well-known reference implementations of those algorithms rather than being written from scratch.

| Folder | Problems |
| --- | --- |
| [`ARRAY`](ARRAY/) | 16 |
| [`BIT MAGIC`](BIT%20MAGIC/) | 11 |
| [`LINKED LIST`](LINKED%20LIST/) | 12 |
| [`MATHS`](MATHS/) | 10 |
| [`MATRIX`](MATRIX/) | 7 |
| [`RECURSION`](RECURSION/) | 7 |
| [`SEARCHING AND SORTING`](SEARCHING%20AND%20SORTING/) | 13 |
| [`STRINGS`](STRINGS/) | 14 |
| [`Competition`](Competition/) | 4 |

## Problems

### Arrays (16)

Folder: [`ARRAY/`](ARRAY/)

| Problem | What it does |
| --- | --- |
| [Equilibrium](ARRAY/Equilibrium.cpp) | Index where the sum of elements on the left equals the sum on the right |
| [Find Immediate Smaller Than X](ARRAY/Find%20Immediate%20Smaller%20Than%20X.cpp) | Largest element in the array that is strictly smaller than X |
| [Find Transition Point](ARRAY/Find%20Transition%20Point.cpp) | Binary search for the first 1 in a sorted 0/1 array |
| [First Repeating Element](ARRAY/First%20Repeating%20Element.cpp) | First element (by position) that occurs more than once |
| [Kadane's Algorithm](ARRAY/Kadane%27s%20Algorithm.cpp) | Maximum contiguous subarray sum in O(n) |
| [Leaders in an array](ARRAY/Leaders%20in%20an%20array.cpp) | Elements greater than or equal to everything to their right |
| [Merge Without Extra Space](ARRAY/Merge%20Without%20Extra%20Space.cpp) | Merge two sorted arrays in place |
| [Rearrange an array with O(1) extra space](ARRAY/Rearrange%20an%20array%20with%20O%281%29%20extra%20space.cpp) | Set arr[i] = arr[arr[i]] by encoding two values per cell |
| [Remove duplicate elements from sorted Array](ARRAY/Remove%20duplicate%20elements%20from%20sorted%20Array.cpp) | Deduplicate a sorted array in place |
| [Reverse array in groups](ARRAY/Reverse%20array%20in%20groups.cpp) | Reverse every block of k elements |
| [Rotate Array](ARRAY/Rotate%20Array.cpp) | Rotate an array by d positions (juggling algorithm with GCD) |
| [Smallest Positive missing number](ARRAY/Smallest%20Positive%20missing%20number.cpp) | Smallest positive integer absent from the array |
| [Subarray with given sum](ARRAY/Subarray%20with%20given%20sum.cpp) | Continuous subarray of non-negative numbers adding up to S |
| [Trapping Rain Water](ARRAY/Trapping%20Rain%20Water.cpp) | Total water trapped between bars of an elevation map |
| [Wave Array](ARRAY/Wave%20Array.cpp) | Rearrange into wave form (a1 >= a2 <= a3 >= ...) with one pass of local swaps |
| [Who has the majority](ARRAY/Who%20has%20the%20majority.cpp) | Majority element via Boyer-Moore voting |

### Bit Manipulation (11)

Folder: [`BIT MAGIC/`](BIT%20MAGIC/)

| Problem | What it does |
| --- | --- |
| [Binary To Gray Code equivalent](BIT%20MAGIC/Binary%20To%20Gray%20Code%20equivalent.cpp) | Convert a number to its Gray code |
| [Bit Difference](BIT%20MAGIC/Bit%20Difference.cpp) | Number of bits to flip to turn A into B |
| [Check whether K-th bit is set or not](BIT%20MAGIC/Check%20whether%20K-th%20bit%20is%20set%20or%20not.cpp) | Test a single bit with a mask |
| [Count total set bits](BIT%20MAGIC/Count%20total%20set%20bits.cpp) | Total set bits across all numbers from 1 to N |
| [Find first set bit](BIT%20MAGIC/Find%20first%20set%20bit.cpp) | Position of the rightmost set bit |
| [Gray to Binary equivalent](BIT%20MAGIC/Gray%20to%20Binary%20equivalent.cpp) | Convert a Gray code back to binary |
| [Maximum subset XOR](BIT%20MAGIC/Maximum%20subset%20XOR.cpp) | Maximum XOR of any subset (Gaussian elimination over bits) |
| [Number is sparse or not](BIT%20MAGIC/Number%20is%20sparse%20or%20not.cpp) | Check that no two adjacent bits are set |
| [Power of 2](BIT%20MAGIC/Power%20of%202.cpp) | Power-of-two check with n & (n - 1) |
| [Rightmost different bit](BIT%20MAGIC/Rightmost%20different%20bit.cpp) | Position of the rightmost bit where two numbers differ |
| [swapBits](BIT%20MAGIC/swapBits.cpp) | Swap all odd and even bits of an integer |

### Linked Lists (12)

Folder: [`LINKED LIST/`](LINKED%20LIST/)

| Problem | What it does |
| --- | --- |
| [Add two numbers represented by linked lists](LINKED%20LIST/Add%20two%20numbers%20represented%20by%20linked%20lists.cpp) | Digit-by-digit addition of two numbers stored as lists |
| [Delete Middle of Linked List](LINKED%20LIST/Delete%20Middle%20of%20Linked%20List.cpp) | Remove the middle node |
| [Detect Loop in linked list](LINKED%20LIST/Detect%20Loop%20in%20linked%20list.cpp) | Cycle detection with slow and fast pointers (Floyd) |
| [Intersection Point in Y Shapped Linked Lists](LINKED%20LIST/Intersection%20Point%20in%20Y%20Shapped%20Linked%20Lists.cpp) | Node where two lists merge, using the length difference |
| [Occurence of an integer in a Linked List](LINKED%20LIST/Occurence%20of%20an%20integer%20in%20a%20Linked%20List.cpp) | Count how often a value appears |
| [Pairwise swap elements of a linked list](LINKED%20LIST/Pairwise%20swap%20elements%20of%20a%20linked%20list.cpp) | Swap adjacent nodes in pairs |
| [Print Linked List elements](LINKED%20LIST/Print%20Linked%20List%20elements.cpp) | Build and traverse a singly linked list |
| [Reverse a Linked List in groups of given size](LINKED%20LIST/Reverse%20a%20Linked%20List%20in%20groups%20of%20given%20size.cpp) | Reverse every k nodes |
| [Reverse a linked list using recursion](LINKED%20LIST/Reverse%20a%20linked%20list%20using%20recursion.cpp) | Recursive reversal |
| [Reverse a linked list](LINKED%20LIST/Reverse%20a%20linked%20list.cpp) | Iterative reversal |
| [Sorted insert for circular linked list](LINKED%20LIST/Sorted%20insert%20for%20circular%20linked%20list.cpp) | Insert into a sorted circular list, keeping it sorted |
| [Split a Circular Linked List into two halves](LINKED%20LIST/Split%20a%20Circular%20Linked%20List%20into%20two%20halves.cpp) | Split one circular list into two circular lists |

### Mathematics (10)

Folder: [`MATHS/`](MATHS/)

| Problem | What it does |
| --- | --- |
| [Absolute Value](MATHS/Absolute%20Value.cpp) | Absolute value of an integer |
| [Addition Under Modulo](MATHS/Addition%20Under%20Modulo.cpp) | (a + b) mod (10^9 + 7) without overflow |
| [Convert Celsius To Fahrenheit](MATHS/Convert%20Celsius%20To%20Fahrenheit.cpp) | Temperature conversion |
| [Digits In Factorial](MATHS/Digits%20In%20Factorial.cpp) | Number of digits in N! using logarithms |
| [Exactly 3 Divisors](MATHS/Exactly%203%20Divisors.cpp) | Count numbers up to N with exactly three divisors (squares of primes) |
| [GP Term](MATHS/GP%20Term.cpp) | N-th term of a geometric progression |
| [Modular Multiplicative Inverse](MATHS/Modular%20Multiplicative%20Inverse.cpp) | Inverse of a mod m via the extended Euclidean algorithm |
| [Primality Test](MATHS/Primality%20Test.cpp) | Trial-division prime check |
| [Quadratic Equation Roots](MATHS/Quadratic%20Equation%20Roots.cpp) | Real or complex roots of ax^2 + bx + c |
| [Smallest divisible number](MATHS/Smallest%20divisible%20number.cpp) | LCM of 1..N, built up with GCD |

### Matrices (7)

Folder: [`MATRIX/`](MATRIX/)

| Problem | What it does |
| --- | --- |
| [Adding two matrices](MATRIX/Adding%20two%20matrices.cpp) | Element-wise matrix addition |
| [Determinant of a Matrix](MATRIX/Determinant%20of%20a%20Matrix.cpp) | Recursive determinant by cofactor expansion |
| [Multiply the matrices](MATRIX/Multiply%20the%20matrices.cpp) | Matrix multiplication |
| [Rotate by 90 degree](MATRIX/Rotate%20by%2090%20degree.cpp) | Rotate a square matrix by 90 degrees |
| [Search in a row-column sorted Matrix](MATRIX/Search%20in%20a%20row-column%20sorted%20Matrix.cpp) | Staircase search from a corner |
| [Spirally traversing a matrix](MATRIX/Spirally%20traversing%20a%20matrix.cpp) | Print elements in spiral order |
| [Transpose of Matrix](MATRIX/Transpose%20of%20Matrix.cpp) | Matrix transpose |

### Recursion (7)

Folder: [`RECURSION/`](RECURSION/)

| Problem | What it does |
| --- | --- |
| [Fibonacci Using Recursion](RECURSION/Fibonacci%20Using%20Recursion.cpp) | N-th Fibonacci number |
| [Josephus problem](RECURSION/Josephus%20problem.cpp) | Survivor position for n people and step k |
| [Lucky Numbers](RECURSION/Lucky%20Numbers.cpp) | Check whether N survives the lucky-number elimination sieve |
| [Power Set Using Recursion](RECURSION/Power%20Set%20Using%20Recursion.cpp) | Generate all subsequences of a string |
| [Print 1 To N Without Loop](RECURSION/Print%201%20To%20N%20Without%20Loop.cpp) | Print 1..N using recursion only |
| [String Permutations](RECURSION/String%20Permutations.cpp) | All permutations of a string by swapping |
| [Sum of Digits of a Number](RECURSION/Sum%20of%20Digits%20of%20a%20Number.cpp) | Recursive digit sum |

### Searching and Sorting (13)

Folder: [`SEARCHING AND SORTING/`](SEARCHING%20AND%20SORTING/)

| Problem | What it does |
| --- | --- |
| [Binary Search](SEARCHING%20AND%20SORTING/Binary%20Search.cpp) | Recursive binary search |
| [Intersection of two sorted arrays](SEARCHING%20AND%20SORTING/Intersection%20of%20two%20sorted%20arrays.cpp) | Common elements with two pointers |
| [Median of Two sorted arrays](SEARCHING%20AND%20SORTING/Median%20of%20Two%20sorted%20arrays.cpp) | Median of two equal-length sorted arrays |
| [Minimum Platforms](SEARCHING%20AND%20SORTING/Minimum%20Platforms.cpp) | Minimum railway platforms needed from arrival and departure times |
| [Minimum Swaps to Sort](SEARCHING%20AND%20SORTING/Minimum%20Swaps%20to%20Sort.cpp) | Fewest swaps to sort, by counting cycles in the permutation |
| [Peak element](SEARCHING%20AND%20SORTING/Peak%20element.cpp) | Element not smaller than its neighbours |
| [Search an element in sorted and rotated array](SEARCHING%20AND%20SORTING/Search%20an%20element%20in%20sorted%20and%20rotated%20array.cpp) | Modified binary search on a rotated array |
| [Sort an array of 0s, 1s and 2s](SEARCHING%20AND%20SORTING/Sort%20an%20array%20of%200s%2C%201s%20and%202s.cpp) | Dutch National Flag partitioning |
| [Square root of a number](SEARCHING%20AND%20SORTING/Square%20root%20of%20a%20number.cpp) | Integer square root by binary search |
| [Union of Two Sorted Arrays](SEARCHING%20AND%20SORTING/Union%20of%20Two%20Sorted%20Arrays.cpp) | Distinct union with two pointers |
| [mergeSort](SEARCHING%20AND%20SORTING/mergeSort.cpp) | Merge sort |
| [quicksort](SEARCHING%20AND%20SORTING/quicksort.cpp) | Quick sort |
| [Different Names in IIITH](SEARCHING%20AND%20SORTING/Different%20Names%20in%20IIITH.cpp) | Earlier C version of the Competition problem below (contains leftover debug output) |

### Strings (14)

Folder: [`STRINGS/`](STRINGS/)

| Problem | What it does |
| --- | --- |
| [Anagram](STRINGS/Anagram.cpp) | Check whether two strings are anagrams |
| [Check for Binary](STRINGS/Check%20for%20Binary.cpp) | Check that a string contains only 0s and 1s |
| [Check if strings are rotations of each other or not](STRINGS/Check%20if%20strings%20are%20rotations%20of%20each%20other%20or%20not.cpp) | Rotation check by searching in s1 + s1 |
| [Convert to Roman No](STRINGS/Convert%20to%20Roman%20No.cpp) | Integer to Roman numerals |
| [Excel Sheet Part - 1](STRINGS/Excel%20Sheet%20Part%20-%201.cpp) | Column number to Excel column name (1 -> A, 28 -> AB) |
| [Implement strstr](STRINGS/Implement%20strstr.cpp) | Substring search |
| [Isomorphic Strings](STRINGS/Isomorphic%20Strings.cpp) | One-to-one character mapping check |
| [Longest Substring Without Repeating Characters](STRINGS/Longest%20Substring%20Without%20Repeating%20Characters.cpp) | Sliding-window longest distinct substring |
| [Maximum Occuring Character](STRINGS/Maximum%20Occuring%20Character.cpp) | Most frequent character |
| [Missing Characters in Panagram](STRINGS/Missing%20Characters%20in%20Panagram.cpp) | Letters needed to make a string a pangram |
| [Multiply two strings](STRINGS/Multiply%20two%20strings.cpp) | Multiply big numbers given as strings |
| [Remainder with 7](STRINGS/Remainder%20with%207.cpp) | Remainder of a very large number (as a string) divided by 7 |
| [Reverse words in a given string](STRINGS/Reverse%20words%20in%20a%20given%20string.cpp) | Reverse the order of space-separated words |
| [Validate an IP Address](STRINGS/Validate%20an%20IP%20Address.cpp) | Validate an IPv4 address |

### Competition (4)

Folder: [`Competition/`](Competition/)

| Problem | What it does |
| --- | --- |
| [Different Names in IIITH](Competition/Different%20Names%20in%20IIITH.cpp) | Count first names that appear more than once (std::map) |
| [Help Consultant at your college](Competition/Help%20Consultant%20at%20your%20college.cpp) | Maximum number of overlapping arrival/departure intervals |
| [Penalties](Competition/Penalties.cpp) | Earliest kick at which a 10-kick penalty shootout is decided (some kicks unknown) |
| [Reflective Symmetric Number](Competition/Reflective%20Symmetric%20Number.cpp) | Check whether a number reads the same when rotated 180 degrees (0, 1, 8, 6/9) |

## How to run

You need a C++ compiler. Most files include `<bits/stdc++.h>`, which comes with GCC (MinGW on Windows), so `g++` is the simplest option.

```bash
# compile one solution (quote the path, because the names contain spaces)
g++ -std=c++17 -O2 "ARRAY/Kadane's Algorithm.cpp" -o kadane

# run it and type the input, or pipe it in
echo "5  -2 1 -3 4 -1" | ./kadane
```

Each program reads its input from stdin in the usual format for that problem: usually the size first, then the elements. Check the `cin`/`scanf` calls at the top of `main()` for the exact order.

---

Made by [Mukul Kumar](https://mkk96.github.io) · [GitHub](https://github.com/mkk96) · [LinkedIn](https://www.linkedin.com/in/mukul-kumar-60322616b/)
