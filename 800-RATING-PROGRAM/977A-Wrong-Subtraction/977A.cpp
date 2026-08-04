/*
----APPROACH----

STEP-1 take input of the number (num) and the number of operations (times).

STEP-2 run a loop exactly 'times' times because we have to perform the operation that many times.

STEP-3 in each iteration, find the last digit of the number using:
        rem = num % 10

STEP-4 if the last digit is not 0, decrease the number by 1.

STEP-5 otherwise, if the last digit is 0, remove the last digit by dividing the number by 10.

STEP-6 repeat the above process until all operations are completed.

STEP-7 after the loop ends, print the final value of the number.

---------------------------------------------------------

LEARNING

- '%' (modulus) is used to find the last digit of a number.
- If the last digit is 0, integer division by 10 removes the last digit.
- The expression 'while(times--)' runs the loop exactly 'times' times.

Time Complexity:
O(k)   // where k = number of operations

Space Complexity:
O(1)
*/



#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any digit number: ";
    cin>>num;
    int times;
    cout<<"Enter how many times you want to subtract: ";
    cin>>times;
    while(times--){
        int rem=num%10;
        if(rem!=0){
            num-=1;
        }
        else if(rem==0){
            num/=10;
        }

    }
    cout<<num;
    return 0;

}