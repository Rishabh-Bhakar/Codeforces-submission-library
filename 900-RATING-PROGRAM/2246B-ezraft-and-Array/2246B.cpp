#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==2){
        cout<<-1<<"\n";
        return;
    }
    if(n==1){
        cout<<1<<" ";
    }
     if(n>=3){
        cout<<1<<" "<<2<<" "<<3<<" ";

    
    long long x=6;
   
        for(int i=4;i<=n;i++){
            cout<<x<<" ";
            x=x*2;
        }
    }
    cout<<"\n";
}
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}