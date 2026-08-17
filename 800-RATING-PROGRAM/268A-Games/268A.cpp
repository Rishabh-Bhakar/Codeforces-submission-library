#include <iostream>
using namespace std;
int main(){
    int match;
    cin>>match;
    int home[match];
    int away[match];
    for(int i=0;i<match;i++){
        cin>>home[i]>>away[i];
    }
    int count=0;
    for(int i=0;i<match;i++){
        for(int j=0;j<match;j++){
            if(i!=j && home[i]==away[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}