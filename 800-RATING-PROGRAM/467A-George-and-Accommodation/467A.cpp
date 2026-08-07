/*
-------------------- KEY OBSERVATION --------------------

A room is suitable only if it has at least
2 empty places.

Condition:
(maxPeople - currPeople) >= 2

-------------------- APPROACH --------------------

STEP-1 Take input n (number of rooms).

STEP-2 Traverse all rooms.

STEP-3 Read current people and maximum capacity.

STEP-4 If the room has at least 2 empty places,
       increase the answer.

STEP-5 Print the total count.

-------------------- LEARNING --------------------

- Check available capacity using:
  (maxPeople - currPeople)
- Count rooms satisfying the given condition.

Time Complexity:
O(n)

Space Complexity:
O(1)

PATTERN

- Linear Traversal
- Counting
- Conditional Check
*/

#include <iostream>
using namespace std;

int main(){
    int room;
   // cout<<"Enter how many rooms you have: ";
    cin>>room;
    int total=0;
   // int i=1;
    while(room--){
        int currPeople;
        int maxPeople;
       // cout<<"Enter how many people living currently in room no "<<i<<": ";
        cin>>currPeople;
       // cout<<"Enter how many people can live max in room no "<<i<<": ";
        cin>>maxPeople;

        if(maxPeople-currPeople>=2){
            total++;
        }
      //  i++;
    }
    cout<<total;
}