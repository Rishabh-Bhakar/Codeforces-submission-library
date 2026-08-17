# Codeforces 1335A — Candies and Two Sisters

## Problem

We are given `n` candies and need to divide them between two sisters such that:

- Both sisters get at least `1` candy.
- Both sisters get a **different** number of candies.

We need to find the number of possible valid divisions.

---

## Approach 1 — Even/Odd Observation

We can divide the problem into two cases.

### Case 1: `n` is Odd

Example:

```text
n = 7
```

Possible divisions:

```text
1 + 6
2 + 5
3 + 4
```

There is no equal division possible.

So:

```cpp
ways = n / 2;
```

For `n = 7`:

```text
7 / 2 = 3
```

Answer = `3`

---

### Case 2: `n` is Even

Example:

```text
n = 8
```

Possible divisions:

```text
1 + 7
2 + 6
3 + 5
4 + 4  ❌
```

`4 + 4` is not allowed because both sisters receive the same number of candies.

Therefore:

```cpp
ways = n / 2 - 1;
```

For `n = 8`:

```text
8 / 2 - 1
= 4 - 1
= 3
```

Answer = `3`

---

## Approach 1 Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int candies;
        cin >> candies;

        if (candies % 2 == 0) {
            int ways = candies / 2 - 1;
            cout << ways << '\n';
        }
        else {
            int ways = candies / 2;
            cout << ways << '\n';
        }
    }

    return 0;
}
```

---

# Approach 2 — Single Mathematical Formula ⭐

We can combine both even and odd cases into one formula:

```cpp
ways = (n - 1) / 2;
```

This works because C++ uses **integer division**.

---

## Why Does `(n - 1) / 2` Work?

### Odd Number

Suppose:

```text
n = 7
```

Then:

```text
(n - 1) / 2
= (7 - 1) / 2
= 6 / 2
= 3
```

Correct answer = `3`

---

### Even Number

Suppose:

```text
n = 8
```

Then:

```text
(n - 1) / 2
= (8 - 1) / 2
= 7 / 2
= 3
```

Since C++ performs integer division:

```text
7 / 2 = 3
```

Correct answer = `3`

---

## Recommended Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int candies;
        cin >> candies;

        cout << (candies - 1) / 2 << '\n';
    }

    return 0;
}
```

---

## Dry Run

### Example 1

```text
n = 5
```

Possible divisions:

```text
1 + 4
2 + 3
```

Formula:

```text
(5 - 1) / 2
= 4 / 2
= 2
```

Answer:

```text
2
```

---

### Example 2

```text
n = 10
```

Possible divisions:

```text
1 + 9
2 + 8
3 + 7
4 + 6
5 + 5 ❌
```

Formula:

```text
(10 - 1) / 2
= 9 / 2
= 4
```

Answer:

```text
4
```

---

### Example 3

```text
n = 2
```

Only possible division:

```text
1 + 1 ❌
```

Formula:

```text
(2 - 1) / 2
= 1 / 2
= 0
```

Answer:

```text
0
```

---

## Important Concepts

### 1. Even/Odd Check

We can check whether a number is even using:

```cpp
n % 2 == 0
```

If true → Even

Otherwise → Odd

---

### 2. Integer Division

In C++:

```cpp
7 / 2
```

gives:

```text
3
```

not `3.5`, because both values are integers.

This behavior allows the formula:

```cpp
(n - 1) / 2
```

to work for both even and odd values.

---

### 3. Mathematical Observation

Instead of checking every possible division, we can directly calculate the answer.

Original observation:

```text
Odd  → n / 2
Even → n / 2 - 1
```

Simplified:

```text
Both → (n - 1) / 2
```

---

## Complexity

For each test case, only constant-time arithmetic operations are performed.

### Time Complexity

```text
O(t)
```

where `t` is the number of test cases.

### Space Complexity

```text
O(1)
```

---

# Revision Notes 🧠

Remember this flow:

```text
n candies
    ↓
Divide between 2 sisters
    ↓
Both must get > 0
    ↓
Both amounts must be different
    ↓
Equal division is NOT allowed
    ↓
Answer = (n - 1) / 2
```

## Formula to Remember

```cpp
answer = (n - 1) / 2;
```

## Concepts Learned

- Even/Odd numbers
- Modulo operator `%`
- Integer division
- Mathematical observation
- Formula derivation
- Multiple test cases
- `while(t--)`
- Converting multiple conditions into a single formula

## Main Takeaway

When a problem asks for the **number of possible ways**, don't immediately try to generate every possibility.

First check whether you can derive a mathematical formula.

For this problem:

```text
Even → n/2 - 1
Odd  → n/2

        ↓ simplify ↓

Answer = (n - 1) / 2
```