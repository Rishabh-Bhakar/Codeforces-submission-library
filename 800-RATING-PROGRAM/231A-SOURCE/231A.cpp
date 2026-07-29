#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        n--;
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    int sum=a+b+c;
    if(sum>=2){
        count++;
    }
    }
    cout<<count;
    return 0;
}