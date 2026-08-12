#include <iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter your test cases: ";
    cin>>t;
    while(t--){
       
        int a;
        int b;
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
        cout<<(b- a % b )%b<<endl;
    }
    return 0;
}