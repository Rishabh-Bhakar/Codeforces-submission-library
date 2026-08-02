/*
----APPROACH----
STEP-1 take input of number of stones (n)
STEP-2 take input of the string representing the colors of stones
STEP-3 initialize a variable count = 0 to store how many stones need to be removed
STEP-4 run a loop from index 0 to n-2 because we have to compare the current stone with the next stone
STEP-5 if the current stone and the next stone have the same color, increase count by 1 because one of them must be removed
STEP-6 continue checking until the loop ends
STEP-7 after the loop finishes, print the value of count because it represents the minimum number of stones that need to be removed
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    //cout<<"Enter number of stones: ";
    cin>>n;
    string s;
    //cout<<"Enter color of stone: ";
    cin>>s;
    int count=0;
    int i=0;
    while(i<n-1){
        if(s[i]==s[i+1]){
            
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}