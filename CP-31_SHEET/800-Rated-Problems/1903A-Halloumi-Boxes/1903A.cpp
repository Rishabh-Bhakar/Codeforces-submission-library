#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long>copy_a=a;
        sort(copy_a.begin(),copy_a.end());
        if(copy_a==a || k>1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;

}