/*
----APPROACH----
STEP-1:-Take input of string
STEP-2:-calculate length of string and assign in any variable
STEP-3:-also initialize a variable to count different characters
STEP-4:-now run a loop until size of string ends
STEP-5:-make a boolean variable and assign it false initially to check that is a character repeating or not
STEP-6:-now run an another inner loop to find that is this character comes in this string before or not 
STEP-7:-if character repeat then break the loop and not increase the count variable otherwise increment the count variable
STEP-8:-lastly check the condition given in the program
*/


#include <iostream>
using namespace std;
int main(){
    string s;
    //cout<<"Enter your String: ";
    cin>>s;
    int size=s.length();
    int diffWord=0; 
    for(int i=0;i<size;i++){
        bool found=false;
        for(int j=0;j<i;j++){
        if(s[i]==s[j]){
            found=true;
            break;
        }
    }
    if(!found){
        diffWord++;
    }
    }
    if(diffWord%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}