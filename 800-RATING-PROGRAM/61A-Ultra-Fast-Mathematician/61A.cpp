#include <iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter your first string: ";
    cin>>s1;
    string s2;
    cout<<"Enter your second string: ";
    cin>>s2;
    string s3;
    s3=s1;
    int len=s1.length()-1;
    int i=0;
    while(i<=len){
        if(s1[i]!=s2[i]){
            s3[i]='1';
        }else{
            s3[i]='0';
        }
        i++;
    }
    cout<<s3;
    return 0;

}