/*
----APPROACH----

STEP-1 take input of the given word.

STEP-2 initialize a variable count = 0.

STEP-3 traverse the entire string.

STEP-4 if the current character is lowercase, increase count by 1.

STEP-5 if the current character is uppercase, decrease count by 1.

STEP-6 after traversing the string:
        - if count >= 0, it means the word contains more lowercase letters
          (or an equal number of lowercase and uppercase letters), so convert
          every character of the string to lowercase.

STEP-7 otherwise, it means the word contains more uppercase letters, so convert
        every character of the string to uppercase.

STEP-8 print the modified string.

---------------------------------------------------------

LEARNING

- islower(ch) checks whether a character is lowercase.
- isupper(ch) checks whether a character is uppercase.
- tolower(ch) converts a character to lowercase.
- toupper(ch) converts a character to uppercase.
- When the number of lowercase and uppercase letters is equal,
  the answer should be in lowercase.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
using namespace std;;
int main(){
    string s;
    //cout<<"Enter your word: ";
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){
            count++;
        }else if(isupper(s[i])){
            count--;
        }
    }
    if(count>=0){
       for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
       }    
       cout<<s;
    }else{
         for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
       }    
       cout<<s;
    }
    return 0;
}