#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minScore=arr[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=minScore && arr[i]>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}