#include <bits/stdc++.h>
using namespace std;
int main(){
    string guestName;
   // cout<<"Enter guest name: ";
    cin>>guestName;
    string hostName;
   // cout<<"Enter host name: ";
    cin>>hostName;
    string pileWord;
   // cout<<"Enter letter found in pile: ";
    cin>>pileWord;
    string required=guestName+hostName;
    sort(required.begin(),required.end());
    sort(pileWord.begin(),pileWord.end());
    if(required==pileWord){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}