# Segment Tree

A Segment Tree is a tree-based data structure that efficiently supports:
i) Range Queries (sum, min, max, gcd, etc.)
ii) Point Updates or Range Updates

It is more generic than a Fenwick Tree (Binary Indexed Tree).

Fenwick Tree mainly supports prefix sums

Segment Tree supports any associative operation (sum, min, max, XOR, etc.)

## Space Requirement

Let n be the size of array.

### Case 1: When n is power of 2

Number of nodes = 𝑛 + 𝑛/2 + 𝑛/4 + ... + 1 = 2𝑛−1

So space required:

**2n - 1**

### Case 2: When n is NOT power of 2

We allocate safe memory:

**4n**

This guarantees enough space.

## Time Complexity

Operation	        Time Complexity
Build Tree	        O(n)
Range Query	        O(log n)
Point Update	    O(log n)
Range Update        (Lazy Propagation)	O(log n)

**Example**

Array:

Index:  0 1 2 3 4 5 6 7
Values: 5 8 6 3 2 7 2 6

Step 1: Leaf Nodes
        5 8 6 3 2 7 2 6

Step 2: Build Parents (Sum Tree)

Level above:

13   9   9   8

Next level:

22   17

Root:

39

Final Tree Structure (Sum Segment Tree)
                39
           22         17
        13    9     9     8
      5  8  6  3   2  7  2  6

## Index Representation

### 0-Based Indexing

If node index = i

Left child = 2i + 1

Right child = 2i + 2

### 1-Based Indexing

If node index = i

Left child = 2i + 0

Right child = 2i + 1

