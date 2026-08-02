/*
----APPROACH----
STEP-1 we will initialize pos1 of elephant = 0
STEP-2  take input of second elephant 
STEP-3 also initialize a variable chance that we check after how many time we did our effort or work and initially it is 0
STEP-4 check that if pos1 and pos2 are not equal if they are equal return chance that is 0
STEP-5 repeat loop until pos1 less than pos2
STEP-6 calculate difference of pos 1 and 2 to compare 
STEP-7 now check according to diff and increase pos1 according to that for an example if diff is greater than or equal to 5 then we will add 5 in pos1 and increase the chance variable by 1 and like that with same
STEP-8 after loop ends print the value of  chance which will our answer
*/


#include <iostream>
using namespace std;
int main(){
    int pos1=0;
    int pos2;
   // cout<<"Enter position of second: ";
    cin>>pos2;
    int chance=0;
    if(pos1==pos2){
        cout<<chance;
        return 0; 
    }
    while(pos1<pos2){
        int diff=pos2-pos1;
        if(diff>=5){
            pos1+=5;
            chance++;
        }else if(diff<5 && diff>=4){
            pos1+=4;
            chance++;
        } else if(diff<4 && diff>=3){
            pos1+=3;
            chance++;
        } else if(diff<3 && diff>=2){
            pos1+=2;
            chance++;
        }else if(diff<2 && diff>=1){
            pos1+=1;
            chance++;
        }
    }
    cout<<chance;
    return 0;

}
