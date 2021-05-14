//calculating the factorial of a number n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :\n";
    cin>>n;

    int fac=1;
    for(int i=1; i<=n; i++){
        fac=fac*i;
    }
    cout<<"Factorial is "<<fac<<"\n";
    return 0;
}