#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Hello length of string: ";
    cin>>len;
    string s;
    cout<<"Hello string: ";
    cin>>s;
    unordered_map<int,bool> visited;

    //int count=0;
    for(int i=0;i<len;i++){
        visited[s[i]]=true;
    }
    for(int i=0;i<=visited.size();i++)
    return 0;
}