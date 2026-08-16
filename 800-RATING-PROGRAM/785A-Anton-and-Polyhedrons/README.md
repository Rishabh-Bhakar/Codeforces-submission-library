# Codeforces 785A — Anton and Polyhedrons

## Problem

Anton has `n` polyhedrons. For each polyhedron, we are given its name.

We need to calculate the **total number of faces** of all the polyhedrons.

### Polyhedrons and Their Faces

| Polyhedron   | Number of Faces |
| ------------ | --------------: |
| Icosahedron  |              20 |
| Dodecahedron |              12 |
| Octahedron   |               8 |
| Cube         |               6 |
| Tetrahedron  |               4 |

---

## Approach

Use a simple **mapping using `if-else` conditions**.

For every polyhedron:

1. Read its name.
2. Compare the name with the known polyhedrons.
3. Add the corresponding number of faces to `sum`.
4. After processing all `n` polyhedrons, print `sum`.

### Main Idea

```text
Polyhedron name
       ↓
Check its type
       ↓
Add corresponding faces
       ↓
Continue for all n
       ↓
Print total
```

---

## Example

### Input

```text
5
Icosahedron
Cube
Tetrahedron
Dodecahedron
Octahedron
```

### Calculation

```text
Icosahedron  → 20
Cube         → 6
Tetrahedron  → 4
Dodecahedron → 12
Octahedron   → 8
```

Total:

```text
20 + 6 + 4 + 12 + 8 = 50
```

### Output

```text
50
```

---

## C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    while (n--) {
        string s;
        cin >> s;

        if (s == "Icosahedron") {
            sum += 20;
        }
        else if (s == "Dodecahedron") {
            sum += 12;
        }
        else if (s == "Octahedron") {
            sum += 8;
        }
        else if (s == "Cube") {
            sum += 6;
        }
        else if (s == "Tetrahedron") {
            sum += 4;
        }
    }

    cout << sum;

    return 0;
}
```

---

## Important Concepts

### 1. String Comparison

We compare strings using:

```cpp
if (s == "Cube")
```

In C++, `==` can be used to compare two `string` objects.

---

### 2. Accumulator Pattern

We maintain a variable:

```cpp
int sum = 0;
```

and continuously add values to it:

```cpp
sum += 20;
sum += 12;
sum += 8;
```

This is called the **accumulator pattern**.

It is very common in programming problems where we need to calculate a total.

---

### 3. `while(n--)`

This:

```cpp
while (n--)
```

means:

> Repeat the loop `n` times, decreasing `n` by 1 after each iteration.

For example, if:

```text
n = 5
```

the loop runs 5 times.

It is equivalent in this situation to:

```cpp
while (n > 0) {
    // work
    n--;
}
```

---

## Alternative Approach

Instead of `if-else`, we can use a `map` or `unordered_map` to associate each polyhedron with its number of faces.

For example:

```cpp
unordered_map<string, int> faces = {
    {"Icosahedron", 20},
    {"Dodecahedron", 12},
    {"Octahedron", 8},
    {"Cube", 6},
    {"Tetrahedron", 4}
};
```

Then:

```cpp
sum += faces[s];
```

This makes the code shorter and introduces the useful concept of **key-value mapping**.

For this beginner problem, however, the `if-else` solution is completely sufficient.

---

## Complexity

There are `n` polyhedrons and each one requires a constant number of comparisons.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

The `if-else` solution uses only a few variables regardless of `n`.

---

## Key Takeaways

* String comparison using `==`
* `if-else` conditions
* Accumulator pattern: `sum += value`
* `while(n--)`
* Mapping names to values
* Basic time and space complexity

### Pattern to Remember

```text
Read item
   ↓
Identify item
   ↓
Get corresponding value
   ↓
Add to total
   ↓
Repeat
```

This pattern appears frequently in beginner Codeforces problems.
