# Codeforces 1328A - Divisibility Problem

## Approach

For each test case, we are given two integers `a` and `b`.

We need to find the minimum number of times `1` must be added to `a` so that `a` becomes divisible by `b`.

Instead of repeatedly increasing `a`, we can use the remainder:

- Calculate `a % b`.
- If the remainder is `0`, `a` is already divisible by `b`, so the answer is `0`.
- Otherwise, the next multiple of `b` is `b - (a % b)` away from `a`.

Therefore, the answer can be calculated directly using:

```cpp
(b - a % b) % b