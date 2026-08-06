/*
----APPROACH----

STEP-1 take input of the total number of people.

STEP-2 initialize a boolean variable isHard = false.

STEP-3 traverse the opinions of all people.

STEP-4 if any person's opinion is 1, set isHard = true because at least one
        person thinks the problem is hard.

STEP-5 after checking all opinions:
        - if isHard is true, print "HARD".
        - otherwise, print "EASY".

---------------------------------------------------------

LEARNING

- A boolean variable can be used as a flag to remember whether a condition
  has been satisfied.
- If we only need to know whether at least one element satisfies a condition,
  a boolean flag is often the simplest approach.

Time Complexity:
O(n)

Space Complexity:
O(1)

PATTERN

- Simulation
- Boolean Flag
- Linear Traversal
*/

#include <iostream>
using namespace std;
int main(){
    int peoples;
    //cout<<"Enter how many people are there: ";
    cin>>peoples;
    int opinion;
    bool isHard=false;
    while(peoples--){
       // cout<<"Enter your opinion: ";
        cin>>opinion;
        if(opinion==1){
            isHard=true;
        }
    }
    if(isHard){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}