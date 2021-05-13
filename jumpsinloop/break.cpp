/*Break statement is used to terminate the current loop. As soon as the break
statement is encountered in a loop, all further iterations of the loop are
stopped and control is shifted to the first statement after the end of loop.*/
#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i==10){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}