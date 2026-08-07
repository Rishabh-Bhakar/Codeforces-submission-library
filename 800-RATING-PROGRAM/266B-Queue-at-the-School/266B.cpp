/*
-------------------- APPROACH --------------------

STEP-1 Take input n (number of students), t (number of seconds),
       and the queue string.

STEP-2 Repeat the process for t seconds.

STEP-3 Traverse the queue from left to right.

STEP-4 If the current pair is "BG":
       - Swap them to "GB".
       - Move the index by 2 because the boy has already moved
         once in this second and cannot move again.

STEP-5 Otherwise, move to the next index.

STEP-6 After all t seconds, print the final queue.

--------------------------------------------------

LEARNING

- This is a Simulation problem.
- Traverse the queue exactly as described in the problem.
- After swapping "BG", skip the next index (i += 2) so the same
  boy doesn't move twice in one second.
- Be careful to iterate only till n-1 because we access i+1.

Time Complexity:
O(n × t)

Space Complexity:
O(1)

PATTERN

- Simulation
- String Traversal
- Adjacent Swap
- Implementation

*/

#include <iostream>
using namespace std;
int main(){
    int stu;
    int time;
    //cout<<"Enter students: ";
    cin>>stu;
   // cout<<"Enter time: ";
    cin>>time;

    string student;
    //cout<<"Enter string of student: ";
    cin>>student;//length=5
    
    while(time--){
        int i=0;
        while(i<stu-1){
        if(student[i]=='B' && student[i+1]=='G'){
            swap(student[i],student[i+1]);
            i+=2;
    }else{
        i+=1;
    }
        }
    }
    cout<<student;
    return 0;


}