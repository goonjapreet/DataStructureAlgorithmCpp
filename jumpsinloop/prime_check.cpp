#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime"<<endl;//found a factor of n
            break;
        }
    }
    if(i==n){
        cout<<"Prime Number"<<endl;//loop has completed all iterations
    }
    return 0;

}