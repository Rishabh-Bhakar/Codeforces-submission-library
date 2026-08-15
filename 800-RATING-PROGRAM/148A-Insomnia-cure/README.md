# Codeforces 148A — Insomnia Cure

## Problem

There are `d` dragons numbered from `1` to `d`.

There are four different powers. A dragon is affected if its number is divisible by at least one of:

- `k`
- `l`
- `m`
- `n`

We need to find the total number of affected dragons.

## Approach

I used a `set<int>` to store the numbers of the dragons that are affected.

### Step 1: Take the Input

We take:

```cpp
k, l, m, n, d