# Codeforces 705A - Hulk

## Approach

We need to print an alternating pattern of `"I hate"` and `"I love"` for `n` levels.

- For every **odd** position, print `I hate`.
- For every **even** position, print `I love`.
- Print `that` between two levels.
- For the last level, print `it` instead of `that`.

We can determine whether the current position is odd or even using the modulo operator:

```cpp
i % 2