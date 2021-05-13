#include<iostream>
using namespace std;

main(){
    int x,y;
    cout<<"enter the value of X and Y"<<endl;
    cin>>x>>y;

    if(x==y){
        cout<<"Both the numbers are equal";
    }
    else{
        if(x>y){
            cout<<"X is greater than Y";
        }
        else{
            cout<<"Y is greater than X";
        }
    }
    return 0;
}