#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        n--;
    string name;
    cin>>name;
    int len=name.length();
    if(len>10){
       cout<<name[0]<<len-2<<name[len-1]<<endl; 
    }else{
        cout<<name<<endl;
    }
    
    }
    return 0;
}