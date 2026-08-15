#include <iostream>
#include <set>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set<int>s;
    for(int i=1;i<=d;i++){
        if(i%k==0){
            s.insert(i);
        }
        else if(i%l==0){
            s.insert(i);
        }
        else if(i%m==0){
                s.insert(i);
            }
        else if(i%n==0){
                s.insert(i);
            }
        }
        int len=s.size();
        cout<<len;
        return 0;
    }
