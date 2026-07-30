#include <iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    
    int size=s1.length();
    for(int i=0;i<size;i++){
       
         if(tolower(s1[i])>tolower(s2[i])){
            cout<<1;
            return 0;
        }
         if(tolower(s1[i])<tolower(s2[i])){
            cout<<-1;
            return 0;
        }
    }
    cout<<0;
    return 0;
    
}