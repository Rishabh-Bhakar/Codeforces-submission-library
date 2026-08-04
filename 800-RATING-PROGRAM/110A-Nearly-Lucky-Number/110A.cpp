/*
----APPROACH----

STEP-1 take input of the given number.

STEP-2 initialize a variable count = 0 to count the number of lucky digits.

STEP-3 traverse every digit of the number using modulus (%) and division (/).

STEP-4 in each iteration, extract the last digit using:
        rem = num % 10

STEP-5 if the last digit is 4 or 7, increase count by 1 because these are lucky digits.

STEP-6 remove the last digit by dividing the number by 10 and continue until the number becomes 0.

STEP-7 after checking all digits, verify whether the count of lucky digits is equal to 4 or 7.

STEP-8 if count is 4 or 7, print "YES" because the number is Nearly Lucky.

STEP-9 otherwise, print "NO".

---------------------------------------------------------

LEARNING

- '%' (modulus) is used to extract the last digit of a number.
- '/= 10' removes the last digit from a number.
- Read the problem statement carefully. The problem does NOT ask whether
  all digits are 4 or 7. It asks whether the COUNT of lucky digits (4 and 7)
  is equal to 4 or 7.

Time Complexity:
O(d), where d is the number of digits.

Space Complexity:
O(1)
*/

#include <iostream>
using namespace std;
int main(){
    int num;
   // cout<<"Enter a number: ";
    cin>>num;
    int count=0;

    while(num!=0){
        int rem=num%10;
        if(rem==4 || rem==7){
            count++;
            
        }
        num/=10;
    }
    if(count==4 || count==7){
    cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}