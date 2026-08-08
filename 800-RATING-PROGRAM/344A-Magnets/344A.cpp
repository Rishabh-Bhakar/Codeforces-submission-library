/*
----APPROACH----

STEP-1 take input of the number of magnets.

STEP-2 take the first magnet as the previous magnet.

STEP-3 initialize count = 1 because the first magnet itself forms
        the first group.

STEP-4 start from the second magnet and take it as the current magnet.

STEP-5 compare the current magnet with the previous magnet.

        If:
        current != previous

        then a NEW group has started, so:
        count++

STEP-6 update the previous magnet:
        previous = current

STEP-7 repeat until all magnets are checked.

STEP-8 print count because it represents the total number of groups.

---------------------------------------------------------

EXAMPLE:

Input:
5
10
10
01
01
10

Groups:

[10 10] [01 01] [10]

Answer = 3

---------------------------------------------------------

IMPORTANT OBSERVATION:

Same magnet:
previous == current
        ↓
Same group
        ↓
Don't increase count

Different magnet:
previous != current
        ↓
New group
        ↓
count++

---------------------------------------------------------

LEARNING:

- Store the previous element when you only need to compare
  the current element with the immediately previous element.
- We don't need to store all magnets in a vector.
- A string is suitable for storing "10" and "01".

Time Complexity:
O(n)

Space Complexity:
O(1)

PATTERN:

- String
- Compare with Previous Element
- Counting Groups
- Simulation
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    string prev;
    cin >> prev;

    int count = 1;

    for(int i = 1; i < num; i++){
        string curr;
        cin >> curr;

        if(prev != curr){
            count++;
        }

        prev = curr;
    }

    cout << count;

    return 0;
}