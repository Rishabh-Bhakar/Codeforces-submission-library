/*
----APPROACH----

STEP-1 take input of the cost of the first banana (k), the initial amount of money (n), and the number of bananas you want to buy (w).

STEP-2 initialize a variable total = 0 to store the total cost of all bananas.

STEP-3 run a loop from 1 to w because the cost of each banana increases by k every time.

STEP-4 in each iteration, add (k * i) to total to calculate the total amount required to buy all bananas.

STEP-5 after the loop ends, calculate the amount of money to borrow:
        borrow = total - n

STEP-6 if borrow is greater than 0, print borrow because that is the amount the soldier needs to borrow.

STEP-7 otherwise, print 0 because the soldier already has enough money.

---------------------------------------------------------

OPTIMIZED APPROACH

Instead of using a loop, we can use the Arithmetic Progression (AP) formula.

Total cost of bananas:

total = k * (w * (w + 1)) / 2

This works because:

k × 1 + k × 2 + k × 3 + ... + k × w
= k × (1 + 2 + 3 + ... + w)

and

1 + 2 + 3 + ... + w = w × (w + 1) / 2

Time Complexity:
Loop Approach    : O(w)
Formula Approach : O(1)

Space Complexity:
O(1)
*/


#include <iostream>
using namespace std;

int main(){
    int k;
   // cout<<"Enter cost of first banana: ";
    cin>>k;
    int n;
    //cout<<"Enter initial money: ";
    cin>>n;
    int w;
   // cout<<"Enter how much banana you want: ";
    cin>>w;
    int total=0;
    for(int i=1;i<=w;i++){
        total=total+k*i;
    }
    int borrow=total-n;
    if(borrow>0){
        cout<<borrow;
    }
    else {
        cout<<0;
    }
    return 0;
}