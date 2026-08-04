/*
----APPROACH----

STEP-1 take input of the total number of games played (games).

STEP-2 take input of the string representing the winner of each game.
        - 'A' represents Anton.
        - 'D' represents Danik.

STEP-3 initialize a variable count = 0.

STEP-4 traverse the entire string.

STEP-5 if the current character is 'A', increase count by 1 because Anton wins one game.

STEP-6 if the current character is 'D', decrease count by 1 because Danik wins one game.

STEP-7 after traversing the string:
        - if count > 0, Anton has won more games, so print "Anton".
        - if count < 0, Danik has won more games, so print "Danik".
        - otherwise, both have won the same number of games, so print "Friendship".

---------------------------------------------------------

LEARNING

- We can use a single counter instead of maintaining two separate variables.
- Increasing the counter for Anton and decreasing it for Danik allows us to compare
  the number of wins efficiently.
- If the final count is:
    > 0  → Anton wins.
    < 0  → Danik wins.
    = 0  → Friendship.

Time Complexity:
O(n)

Space Complexity:
O(1)

PATTERN

- Strings
- Counting
- Simulation
*/

#include <iostream>
using namespace std;
int main(){
    int games;
    //cout<<"Enter how many games played: ";
    cin>>games;
    string s;
    //cout<<"Enter your string: ";
    cin>>s;
    int count=0;
    for(int i=0;i<games;i++){
        if(s[i]=='A'){
            count++;
        }
        else if(s[i]=='D'){
            count--;
        }
    }
    if(count>0){
        cout<<"Anton";
    }else if(count<0){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}