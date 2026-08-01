/*
----APPROACH----
STEP-1 first take input of string
STEP-2 then check is the first index of the string small or capital if it is small then just convert this into capital 
STEP-3 ASCII VALUES:-   A-Z(65-90) ,  a-z(97-122) so there is difference of 32 in each letter so we subtract 32 if it is small alphabet letter

*/

#include <iostream>
using namespace std;
int main(){
    string s;
    //cout<<"Enter your string: ";
    cin>>s;
    if(s[0]>=97 && s[0]<=122){
        s[0]=s[0]-32;
    }
    cout<<s;
    return 0;
}