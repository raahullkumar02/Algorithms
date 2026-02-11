# Fenwick Tree (Binary Indexed Tree)
A Fenwick Tree, also known as a Binary Indexed Tree (BIT), is a data structure used to efficiently compute and update prefix sums in an array.
It is a dynamic variant of the prefix sum array because:
A normal prefix sum array allows O(1) queries but O(n) updates.
A Fenwick Tree allows both updates and prefix sum queries in O(log n) time.

# Time Complexity
Operation	Complexity
Build Tree	O(n log n)
Get Prefix Sum	O(log n)
Update Element	O(log n)

# Space Complexity
O(n) for storing the Fenwick Tree array.


# Example

Array:   1  4  4 16  6  7  4 29

# GetNext
i) take 2's complement (x 2's complement = -x)
ii) AND with original value
iii) add with original value

let k be the original value now i want to go to next node 

k += k & -k;

# GetParent
i) take 2's complement (x 2's complement = -x)
ii) AND with original value
iii) sub with original value

let k be the original value now i want to go to parent of k

k -= k & -k;