/*
----APPROACH----
STEP-1 take weight as an input of limak and bob
STEP-2 also initialize a counter variable with 0 so that we can check after how much time its done 
STEP-3 run a while loop and repeat untill weight of limak strictly greater than bob
STEP-4 if its not then update weight of limak by multiply 3 and bob by 2
STEP-5 also update counter for check how many times this process done
STEP-6 if loop ends print counter
*/

#include <iostream>
using namespace std;
int main(){
    int a,b;
   // cout<<"Enter weight of limak: ";
    cin>>a;
   // cout<<"Enter weight of bob: ";
    cin>>b;
    int count=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count;
    return 0;
}

