/*a program to find out whether a given number is even or odd
using functions*/
#include<iostream>
using namespace std;

int isEven(int num){
    return !(num&1);//using bitwise operator
}

int main(){
    int num;
    cout<<"enter any number:\n";
    cin>>num;

    if(isEven(num)){
        cout<<"The number is even.\n";
    }
    else{
        cout<<"the number is odd\n";
    }
    
}