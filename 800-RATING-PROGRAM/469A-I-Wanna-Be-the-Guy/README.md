# Codeforces 469A — I Wanna Be the Guy

## Problem

There are `n` levels in a game.

Little X can pass some levels and Little Y can pass some levels.

We need to determine whether **together they can pass all `n` levels**.

### Output

* If they can pass all levels → `I become the guy!`
* Otherwise → `Oh, my keyboard!`

---

## Approach

Use a **Set** to store all the levels that can be passed by either X or Y.

A `set` stores only **unique elements**, so if both X and Y can pass the same level, it will be stored only once.

### Steps

1. Read the total number of levels `n`.
2. Read the number of levels X can pass.
3. Insert all X's levels into a `set`.
4. Read the number of levels Y can pass.
5. Insert all Y's levels into the same `set`.
6. Check the number of unique levels in the set.
7. If `set.size() == n`, all levels are covered.
8. Otherwise, some level is missing.

---

## Example

### Input

```text
4
2
1 2
2
2 4
```

### Set after inserting all levels

```text
{1, 2, 4}
```

There are `3` unique levels, but the game has `4` levels.

Therefore:

```text
Oh, my keyboard!
```

---

## Important Concept

### Set

```cpp
set<int> levels;
```

A `set` stores **unique values**.

For example:

```cpp
levels.insert(1);
levels.insert(2);
levels.insert(2);
levels.insert(4);
```

The set becomes:

```text
{1, 2, 4}
```

The duplicate `2` is automatically ignored.

### Why use Set here?

We only care about **how many different levels** X and Y can collectively pass.

So instead of manually checking duplicates, the `set` handles them automatically.

---

## Algorithm

```text
Create an empty set

Insert all levels X can pass

Insert all levels Y can pass

If number of unique levels == n
    Print "I become the guy!"
Else
    Print "Oh, my keyboard!"
```

---

## Complexity

Let `p` be the number of levels X can pass and `q` be the number of levels Y can pass.

### Time Complexity

```text
O((p + q) log(p + q))
```

Each insertion into a `set` takes `O(log n)`.

### Space Complexity

```text
O(p + q)
```

In the worst case, all levels are different.

---

## C++ Solution

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    set<int> levels;

    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    if (levels.size() == n) {
        cout << "I become the guy!";
    }
    else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
```

---

## Key Takeaway

> **When multiple groups contain items and you need to find whether their combined unique items cover everything, think about using a `set`.**

### Concepts Learned

* `set`
* Unique elements
* `insert()`
* `size()`
* Combining two sets of values
* Complexity of `set` insertion
