#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the positive decimal number"<<endl;
    cin>>n;

    while(n>0){
        int rem=n%10;
        cout<<rem<<"\n";
        n=n/10;
    }
    return 0;
}