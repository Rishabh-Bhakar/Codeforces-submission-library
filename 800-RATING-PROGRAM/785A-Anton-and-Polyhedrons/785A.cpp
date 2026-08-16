#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    while(n--){
        string s;
        cout<<"Enter string: ";
        cin>>s;
        if(s=="Icosahedron"){
            sum+=20;
        }
        else if(s=="Dodecahedron"){
            sum+=12;
        }
        else if(s=="Octahedron"){
            sum+=8;
        }
        else if(s=="Cube"){
            sum+=6;
        }
        else if(s=="Tetrahedron"){
            sum+=4;
        }
    }
    cout<<sum;
    return 0;
}