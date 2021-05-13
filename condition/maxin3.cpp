//Program to find the maximum among three numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three numbers:"<<endl;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is maximun"<<endl;
        }
        else{
            cout<<c<<" is maximun"<<endl;
        }

    }
    else{
        if(b>c){
            cout<<b<<" is maximun"<<endl;
        }
        else{
            cout<<c<<" is maximun"<<endl;
        }
    }

    return 0;
}