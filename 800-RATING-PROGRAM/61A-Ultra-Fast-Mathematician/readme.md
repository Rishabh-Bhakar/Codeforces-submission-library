### Approach — Codeforces 61A: Ultra-Fast Mathematician

We are given two binary strings of the same length.

Traverse both strings character by character:

* If the characters are **different**, store `'1'`.
* If the characters are **same**, store `'0'`.

This is equivalent to performing an **XOR** operation on every pair of characters.

For example:

```text
s1 = 10101
s2 = 00111

Answer = 10010
```

### Algorithm

1. Read the two strings.
2. Create a result string with the same length.
3. Traverse from `i = 0` to `n - 1`.
4. If `s1[i] != s2[i]`, set `result[i] = '1'`.
5. Otherwise, set `result[i] = '0'`.
6. Print the result.

### Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)`
