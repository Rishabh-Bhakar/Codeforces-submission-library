/*
----APPROACH----

STEP-1 take input of the total number of tram stops.

STEP-2 initialize three variables:
        - total = 0          // current passengers inside the tram
        - maxPassengers = 0  // maximum passengers at any time
        - enter, exit        // passengers entering and leaving

STEP-3 repeat the process for every stop.

STEP-4 take input of:
        - number of passengers leaving the tram.
        - number of passengers entering the tram.

STEP-5 update the current number of passengers using:
        total = total + enter - exit

STEP-6 after updating the current passengers, compare it with the maximum capacity reached so far.
        If total is greater than maxPassengers, update maxPassengers.

STEP-7 after processing all the stops, print maxPassengers because it represents the minimum capacity the tram must have.

---------------------------------------------------------

LEARNING

- Keep track of the current state using a running variable (total).
- Instead of handling the first stop, last stop, and middle stops separately,
  one general formula works for every stop:
        total = total + enter - exit
- Maintain another variable to store the maximum value reached during the traversal.

Time Complexity:
O(n)

Space Complexity:
O(1)

PATTERN

- Simulation
- Greedy Observation
- Running Sum
- Maximum Tracking
*/

#include <iostream>
using namespace std;
int main(){
    int stops;
   // cout<<"Enter how many stops on which bus will stop: ";
    cin>>stops;
    int maxPassengers=0;
    int exit=0,enter=0,total=0;
    for(int i=1;i<=stops;i++){
        // if(i==1){
        //     cout<<"Enter how many people are entering in the bus: ";
        //     cin>>enter;
        //     total+=enter-exit;
        //     if(total>max){
        //     max=total;
        //     }
        // }
        // else if(i==stops){
        //     cout<<"Enter how many people living the bus: ";
        //     cin>>exit;
        //     total+=enter-exit;
        //     if(total>max){
        //     max=total;
        //     }
        // }
        // else{
        //     cout<<"Enter how many people are entering in the bus: ";
        //     cin>>enter;
        //     cout<<"Enter how many people living the bus: ";
        //     cin>>exit;
        //     total+=enter-exit;
        //     if(total>max){
        //     max=total;
        //     }
        // }

        //cout<<"Enter how many people leaving from bus on stop "<<i<<": ";
        cin>>exit;
        //cout<<"Enter how many people entering in bus on stop "<<i<<": ";
        cin>>enter;
        total+=enter-exit;
        if(total>maxPassengers){
            maxPassengers=total;
        }

    }
    cout<<maxPassengers;
    return 0;
}
