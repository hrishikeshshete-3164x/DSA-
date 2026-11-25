## Time Complexity (TC)

**Definition:** The rate at which the time taken (TT) by an algorithm changes with respect to the input size.

It is **not** the actual time in seconds. It tells us how the running time *grows* as the input gets bigger.

### 3 things to keep in mind

1. **Always think in the worst case.** Compute the TC for the situation where the code does the maximum work.
2. **Avoid constants.** O(2n) and O(5n) are both written as O(n).
3. **Avoid lower-order terms.** Keep only the biggest term. O(n² + n) becomes O(n²).

### Notation

TC is written using **Big O notation: O( )**

| Complexity | Meaning | Example |
|---|---|---|
| O(n) | one loop over the input | sum of an array |
| O(n²) | nested loops over the input | printing all pairs |

## Space Complexity (SC)

**Definition:** Space complexity = **auxiliary space + input space**

- **Auxiliary space:** the extra space (temporary memory) used by the algorithm, e.g. a new array or vector, or variables created inside the code.
- **Input space:** the space taken by the input itself.
