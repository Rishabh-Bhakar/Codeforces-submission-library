/*
----APPROACH----

STEP-1 take input of the given year.

STEP-2 repeatedly increase the year by 1 because we need to find the next beautiful year.

STEP-3 for every new year, extract all four digits using modulus (%) and division (/).

STEP-4 compare all four digits with each other.

STEP-5 if all four digits are different, print the current year because it is the next beautiful year and terminate the program.

STEP-6 otherwise, continue checking the next year by increasing it again.

---------------------------------------------------------

LEARNING

- Use '%' (modulus) to extract the last digit.
- Use '/= 10' to remove the last digit.
- A loop is used because we don't know how many years we need to check.
- Two numbers are beautiful if all four digits are distinct.

Time Complexity:
O(1)

Space Complexity:
O(1)

PATTERN

- Mathematics
- Simulation
- Digit Manipulation
- Brute Force
*/

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    while(true){
        num+=1;
        int newNum=num;
        
        int dig1=newNum%10;
        newNum/=10;
        int dig2=newNum%10;
        newNum/=10;
        int dig3=newNum%10;
        newNum/=10;
        int dig4=newNum%10;\
        newNum/=10;
        if(dig1!=dig2 &&
            dig1!=dig3 &&
            dig1!=dig4 &&
            dig2!=dig3 &&
            dig2!=dig4 &&
            dig3!=dig4){
            cout<<num;
            return 0;
        }
        
    }
    return 0;
}