Codeforces 723A — Step-by-Step Approach

Step 1: Understand the problem

There are 3 people standing at 3 different coordinates on a straight line.

They all need to meet at one point.

The goal is to find the minimum total distance they need to travel.

Step 2: Think about the meeting point

Suppose the coordinates are:

a < b < c

The three people are arranged like this:

a -------- b ---------------- c

The best place for them to meet is the middle coordinate b.

Step 3: Calculate the total distance

If everyone meets at b:

Distance = (b - a) + (c - b)

Step 4: Simplify

(b - a) + (c - b)

= b - a + c - b

= c - a

So the middle coordinate cancels out.

Step 5: Identify what a and c are

Since:

a < b < c

a = smallest coordinate

c = largest coordinate

Therefore:

Answer = maximum coordinate - minimum coordinate

Step 6: Apply it to the problem

For example:

1 3 7

Minimum coordinate:

1

Maximum coordinate:

7

Answer:

7 - 1 = 6

Step 7: How to think about it in a contest

When you see:

3 points + straight line + minimum total distance

Think:

Find minimum
      ↓
Find maximum
      ↓
Middle point is the optimal meeting point
      ↓
Total distance = maximum - minimum

Main observation

You don't actually need to calculate the exact meeting point.

You only need:

maximum - minimum

So your idea:

int minDistance = max - min;

is correct.

DSA Lesson

This problem is mainly about mathematical observation, not a difficult algorithm.

The important question to train yourself to ask is:

"If I arrange the points from smallest to largest, where should they meet to minimize the total distance?"

For 3 points on a line, the answer is the middle point, which leads to:

maximum - minimum