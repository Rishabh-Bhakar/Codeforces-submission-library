# Codeforces 1742A — Sum

## Problem

You are given `n` test cases.

For each test case, three integers `a`, `b`, and `c` are given.

We need to determine whether **any two of the three numbers add up to the third number**.

### Conditions

There are three possible cases:

```text id="3h2c8y"
a + b = c
b + c = a
a + c = b
```

If any one of these conditions is true, print:

```text id="8q3p1v"
YES
```

Otherwise, print:

```text id="6px8a2"
NO
```

---

## Approach

Use simple **conditional checking**.

For each test case:

1. Read `a`, `b`, and `c`.
2. Check whether `a + b == c`.
3. Check whether `b + c == a`.
4. Check whether `a + c == b`.
5. If **any** condition is true, print `YES`.
6. Otherwise, print `NO`.

The three conditions are combined using the logical **OR (`||`) operator**.

```cpp id="g0b6bj"
if (a + b == c || b + c == a || a + c == b)
```

`||` means:

> If **at least one** condition is true, the entire condition becomes true.

---

## Example

### Input

```text id="8qrv5v"
3
1 2 3
2 5 8
10 4 6
```

### Test Case 1

```text id="1 + 2 = 3"
```

So:

```text
YES
```

### Test Case 2

```text id="2 + 5 = 7
2 + 8 = 10
5 + 8 = 13"
```

None of these equals the remaining number.

So:

```text
NO
```

### Test Case 3

```text id="4 + 6 = 10"
```

So:

```text
YES
```

### Output

```text id="a1c9x4"
YES
NO
YES
```

---

## C++ Solution

```cpp 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || b + c == a || a + c == b) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
```

---

## Important Concepts

### 1. Logical OR `||`

The operator:

```cpp id="m0e8l1"
||
```

means **OR**.

Example:

```cpp id="c8y0ka"
if (a == 5 || b == 5)
```

The condition is true if:

* `a == 5`, **or**
* `b == 5`, **or**
* both are `5`.

For this problem:

```cpp id="s5g8c2"
a + b == c || b + c == a || a + c == b
```

means:

> At least one pair must have a sum equal to the third number.

---

### 2. Multiple Conditions

When there are several possible ways for something to be true, we can combine conditions using `||`.

Here there are exactly three possibilities:

```text id="8p0u9h"
a + b = c
b + c = a
a + c = b
```

---

### 3. `while(n--)`

```cpp id="w4q0l6"
while (n--)
```

runs the loop exactly `n` times.

For example, if:

```text id="d7y8l3"
n = 4
```

the loop processes 4 test cases.

Equivalent form:

```cpp id="q3n4v8"
while (n > 0) {
    // process test case
    n--;
}
```

---

## Dry Run

Suppose:

```text id="a0n5c9"
a = 3
b = 7
c = 10
```

Check:

```text id="j8f3x2"
a + b == c
3 + 7 == 10
10 == 10
```

This is true.

Because we used `||`, we don't need to check whether the other conditions are true.

Therefore:

```text id="k4m1p7"
YES
```

---

## Complexity

For every test case, we perform only 3 comparisons.

### Time Complexity

```text id="2h6w9a"
O(n)
```

where `n` is the number of test cases.

### Space Complexity

```text id="7k1p3d"
O(1)
```

Only a few integer variables are used.

---

## Key Takeaways

* Logical OR operator `||`
* Multiple condition checking
* `if-else`
* `while(n--)`
* Basic arithmetic operations
* Processing multiple test cases
* `O(n)` time and `O(1)` space

### Pattern to Remember

When a problem asks:

> "Is **any one** of these conditions true?"

Think:

```cpp id="r2m7x1"
condition1 || condition2 || condition3
```

For this problem:

```cpp id="f6k3p9"
a + b == c ||
b + c == a ||
a + c == b
```

If **any one** is true → `YES`.

Otherwise → `NO`.
