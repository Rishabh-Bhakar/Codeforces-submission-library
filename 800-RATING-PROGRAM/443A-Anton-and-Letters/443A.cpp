#include <iostream>
#include <set>
using namespace std;
int main(){
    string str;
   // cout<<"Enter string: ";
    getline(cin,str);
    set<char>s;
    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122 ){
            s.insert(str[i]);
        }
    }
    int len=s.size();
    cout<<len;
    return 0;

}