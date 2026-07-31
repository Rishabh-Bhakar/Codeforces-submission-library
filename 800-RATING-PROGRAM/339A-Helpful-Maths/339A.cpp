/*
----APPROACH---

----*IMPORTANT*--- there are always better approach than mine but i just solve this by this method
STEP-1:-take input of string
STEP-2:-calculate size of string
STEP-3:-run the outer for loop and the main think is we will increase i by 2 because we know alternate + char is there which we have to ignore 
STEP-4:-we will run inner for loop for j=i+2 because we want to compare next char after + and same with this we will increase j with 2
STEP-5:-if the char at i th index greater than char at j th index we will simply swap them 
STEP-6:-print final string
*/


#include <iostream>
using namespace std;

int main(){
    string s;
   // cout<<"Enter your string: ";
    cin>>s;
    int size=s.length();
    //char temp;
    for(int i=0;i<size;i+=2){
        for(int j=i+2;j<size;j+=2){
            if(s[i]>s[j]){
                // temp=s[i];
                // s[i]=s[j];
                // s[j]=temp;
                swap(s[i],s[j]);//better way
            }
        }
    }
    cout<<s;
    return 0;
}