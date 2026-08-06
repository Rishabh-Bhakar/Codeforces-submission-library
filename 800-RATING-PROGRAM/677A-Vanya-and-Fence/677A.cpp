#include <iostream>
using namespace std;
int main(){
    int dost;
   // cout<<"Enter how many friends you have with you: ";
    cin>>dost;
    int height;
    //cout<<"Enter height of fence: ";
    cin>>height;
    int width=0;
    int arr[dost];
    for(int i=0;i<dost;i++){
        //cout<<"Enter height of your friends at index"<<i<<": ";
        cin>>arr[i];
        if(arr[i]>height){
            width+=2;
        }
        else{
            width+=1;
        }
    }
    cout<<width;
    return 0;

}