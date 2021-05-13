//Program to find maximum, minimum among two numbers.

#include<iostream>
using namespace std;

int main(){
    int n1,n2;

    cout<<"Enter the values of n1 & n2"<<endl;
    cin>>n1>>n2;

    int max,min;

    if(n1>n2){
        max=n1;
        min=n2;
    }
    else{
        max=n2;
        min=n1;
    }

    cout<<"Max="<<max<<endl;
    cout<<"Min="<<min<<endl;

    return 0;

}