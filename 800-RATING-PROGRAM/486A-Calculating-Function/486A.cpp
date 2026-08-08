/*
----APPROACH----

STEP-1 take input of n.

STEP-2 observe the pattern of the function:

        f(1) = -1
        f(2) = -1 + 2 = 1
        f(3) = -1 + 2 - 3 = -2
        f(4) = -1 + 2 - 3 + 4 = 2
        f(5) = -1 + 2 - 3 + 4 - 5 = -3

STEP-3 observe that the answer follows a simple pattern:

        If n is EVEN:
            answer = n / 2

        If n is ODD:
            answer = -(n + 1) / 2

STEP-4 check whether n is even or odd using:
        n % 2

STEP-5 if n is even, print n/2.

STEP-6 if n is odd, print -(n+1)/2.

---------------------------------------------------------

LEARNING

- Always check the constraints before choosing a loop.
- Here n can be very large (up to 10^15/10^16 range),
  so an O(n) loop will give TLE.
- Look for a mathematical pattern instead of calculating every term.

Time Complexity:
O(1)

Space Complexity:
O(1)

PATTERN

- Mathematics
- Pattern Observation
- Even/Odd
- Mathematical Optimization
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long num;
   // cout<<"Enter a number: ";
    cin>>num;
    long long result;
    if(num%2==0){
       result=num/2; 
    }else{
        result=-(num+1)/2;
    }
    cout<<result;
    return 0;
}