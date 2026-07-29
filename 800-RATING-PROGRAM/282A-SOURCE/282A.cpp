#include <iostream>
using namespace std;
int main(){
    int x=0;
    int n;
    cin>>n;
    while(n>0){
        n--;
        string s;
        cin>>s;
        if(s[1]=='+'){
            x++;
        }
        if(s[1]=='-'){
            x--;
        }
    }
    cout<<x;
    return 0;
}