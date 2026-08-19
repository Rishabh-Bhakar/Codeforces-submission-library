#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int egg,stick,toy;
        cin>>egg>>stick>>toy;
        int result=min({egg,stick,toy})+1;
        cout<<result<<endl;


    }
    return 0;
}