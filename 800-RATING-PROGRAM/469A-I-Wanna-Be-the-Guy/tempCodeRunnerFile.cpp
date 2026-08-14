#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int p;
    cout<<"Enter levels of p that he can pass: ";
    cin>>p;
    set<int>levels;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        levels.insert(x);
    }
    int q;
    cout<<"Enter levels of q that he can pass: ";
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        levels.insert(x);
    }
    if(levels.size()==n){
        cout<<"I become the guy";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;

}