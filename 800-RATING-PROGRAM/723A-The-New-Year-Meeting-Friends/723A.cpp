#include <bits/stdc++.h>
using namespace std;
int main(){
    int cord1,cord2,cord3;
    cin>>cord1>>cord2>>cord3;
    int max=(cord1>cord2)?(cord1>cord3?cord1:cord3):(cord2>cord3?cord2:cord3);
    int min=(cord1<cord2)?(cord1<cord3?cord1:cord3):(cord2<cord3?cord2:cord3);
    int minDistance=max-min;
    cout<<minDistance;
    return 0;
    
}