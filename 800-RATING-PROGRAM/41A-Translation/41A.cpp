#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    string t;
    
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}