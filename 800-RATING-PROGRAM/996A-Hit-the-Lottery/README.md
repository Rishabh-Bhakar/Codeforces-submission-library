# Codeforces 996A — Hit the Lottery

## Problem

You are given an amount of money `n`.

You need to pay this amount using the minimum possible number of bills.

The available denominations are:

```text
100, 20, 10, 5, 1
```

Find the **minimum number of bills** required to make exactly `n`.

---

## Approach

Use a **Greedy Algorithm**.

Always take the largest possible denomination first:

```text
100 → 20 → 10 → 5 → 1
```

For each denomination:

```cpp
count += n / coin;
n %= coin;
```

### Why?

`n / coin` tells us how many bills of that denomination we can use.

`n % coin` gives us the remaining amount.

For example, if:

```text
n = 225
```

Using `100`:

```text
225 / 100 = 2
225 % 100 = 25
```

So we use two `100` bills.

Then:

```text
25 / 20 = 1
25 % 20 = 5
```

Then:

```text
5 / 5 = 1
5 % 5 = 0
```

Total:

```text
2 + 1 + 1 = 4
```

Therefore, the answer is `4`.

---

## Algorithm

1. Store the denominations:

```text
100, 20, 10, 5, 1
```

2. For every denomination:

   * Calculate `n / coin`.
   * Add it to `count`.
   * Update `n` using `n % coin`.
3. Print `count`.

---

## C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    int coins[] = {100, 20, 10, 5, 1};

    for (int coin : coins) {
        count += n / coin;
        n %= coin;
    }

    cout << count;

    return 0;
}
```

---

## Example

### Input

```text
125
```

### Calculation

```text
125 / 100 = 1 → remaining 25
25 / 20 = 1  → remaining 5
5 / 5 = 1    → remaining 0
```

### Output

```text
3
```

Because:

```text
125 = 100 + 20 + 5
```

---

## Why Greedy Works

The denominations are structured so that using a larger bill is always at least as efficient as replacing it with smaller bills.

For example:

```text
100 = 5 × 20
20  = 2 × 10
10  = 2 × 5
5   = 5 × 1
```

Therefore, taking the largest possible bill first gives the minimum number of bills.

---

## Complexity

There are only 5 denominations.

### Time Complexity

```text
O(1)
```

### Space Complexity

```text
O(1)
```

---

## Concepts Learned

* Greedy Algorithm
* Integer division `/`
* Modulo operator `%`
* Arrays
* Range-based `for` loop
* Minimum number of coins/bills
* `O(1)` time and space complexity

---

## Key Takeaway

The important pattern to remember is:

```cpp
count += n / coin;
n %= coin;
```

Whenever you need to repeatedly take as many of a denomination/value as possible, this **division + modulo** pattern is useful.

For this problem:

```text
Amount
  ↓
100 → 20 → 10 → 5 → 1
  ↓
Greedy choice
  ↓
Minimum number of bills
```
