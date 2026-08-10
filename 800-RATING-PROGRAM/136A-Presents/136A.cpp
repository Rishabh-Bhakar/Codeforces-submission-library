/*
Codeforces 136A - Presents

PROBLEM:
- There are n friends.
- Each friend gives a present to exactly one friend.
- Input tells us which friend each person gave a present to.
- We need to find who gave a present to each friend.

--------------------------------------------------
APPROACH 1: My Brute Force Approach
--------------------------------------------------

1. Store all the given values in an array.

2. We need the answer for friend 1, then friend 2,
   then friend 3, and so on.

3. For every friend i:
      - Search the complete array.
      - Find the position j where:
            arr[j] == i + 1
      - Friend (j + 1) gave the present to friend (i + 1).
      - Therefore, print j + 1.

Example:

Input:
4
2 3 4 1

This means:
Friend 1 -> Friend 2
Friend 2 -> Friend 3
Friend 3 -> Friend 4
Friend 4 -> Friend 1

For friend 1:
Search for 1 -> found at index 3 -> answer = 4

For friend 2:
Search for 2 -> found at index 0 -> answer = 1

For friend 3:
Search for 3 -> found at index 1 -> answer = 2

For friend 4:
Search for 4 -> found at index 2 -> answer = 3

Output:
4 1 2 3

TIME COMPLEXITY:
- Outer loop = O(n)
- Inner loop = O(n)
- Total = O(n²)

SPACE COMPLEXITY:
- O(n)


--------------------------------------------------
APPROACH 2: Better / Optimized Approach
--------------------------------------------------

Instead of searching the array again and again,
we can reverse the relationship while reading the input.

Suppose:

Friend i -> Friend x

Then we know:

Friend x received the present from Friend i.

So store:

ans[x] = i


Example:

Input:
4
2 3 4 1

When i = 1:
x = 2
ans[2] = 1

When i = 2:
x = 3
ans[3] = 2

When i = 3:
x = 4
ans[4] = 3

When i = 4:
x = 1
ans[1] = 4

Now:

ans[1] = 4
ans[2] = 1
ans[3] = 2
ans[4] = 3

Output:
4 1 2 3

The main idea is:
Instead of searching "who gave to me?",
directly store "who gave to this person?"
while reading the input.

TIME COMPLEXITY:
- Reading and storing = O(n)
- Printing = O(n)
- Total = O(n)

SPACE COMPLEXITY:
- O(n)

--------------------------------------------------
IMPORTANT DSA IDEA:
--------------------------------------------------

When a problem gives:

    A -> B

but asks:

    Who -> A?

Think about REVERSING THE MAPPING.

Instead of searching later, store the reverse relationship
immediately.

Original:
    person i -> person x

Reverse:
    ans[x] = i

This changes the solution from O(n²) to O(n).
*/

#include <iostream>
using namespace std;
int main(){
    int size;
    //cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        //cout<<"Enter element: ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if(arr[j]==i+1){
            cout<<j+1;
        }
        }
    }
    return 0;
}