#include <iostream>
using namespace std;
int main(){
    int testCase;
   // cout<<"Enter test cases: ";
    cin>>testCase;
    while(testCase--){
        int candies;
      //  cout<<"Enter candies: ";
        cin>>candies;
        if(candies%2==0){
            int ways=candies/2-1;
            cout<<ways<<endl;
        }
        else{
            int ways=candies/2;
            cout<<ways<<endl;
        }
    }
    return 0;
}
