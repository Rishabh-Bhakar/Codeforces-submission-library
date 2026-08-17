# Codeforces 268A — Games

## Approach

We have `n` teams.

Each team has:

- `home[i]` → home uniform color
- `away[i]` → away uniform color

We need to count how many times a team's **home color** is equal to another team's **away color**.

---

## Step-by-Step

### 1. Store the colors

Store the home and away colors of every team:

```cpp
home[i]
away[i]
```

---

### 2. Compare every home color with every away color

Use **nested loops**:

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // compare
    }
}
```

Here:

- `i` represents the team whose **home color** we are checking.
- `j` represents the team whose **away color** we are checking.

---

### 3. Avoid comparing a team with itself

We only want different teams.

Therefore:

```cpp
i != j
```

---

### 4. Check the colors

If:

```cpp
home[i] == away[j]
```

then a color match occurs.

So:

```cpp
if (i != j && home[i] == away[j]) {
    count++;
}
```

---

## Core Idea

```text
Team i's HOME color
        ↓
Compare with
        ↓
Every other team's AWAY color
        ↓
If they are equal
        ↓
count++
```

---

## Example

```text
3
1 2
2 3
3 1
```

Stored as:

```text
Home: 1 2 3
Away: 2 3 1
```

Comparisons:

```text
Home 1 → Away 1 → Match
Home 2 → Away 2 → Match
Home 3 → Away 3 → Match
```

Answer:

```text
3
```

---

## Complexity

Nested loops compare every team with every other team.

**Time Complexity:**

```text
O(n²)
```

**Space Complexity:**

```text
O(n)
```

---

## Revision Point 🧠

When a problem says:

> Compare every item with every other item

think:

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // comparison
    }
}
```

For this problem, remember:

```cpp
i != j && home[i] == away[j]
```