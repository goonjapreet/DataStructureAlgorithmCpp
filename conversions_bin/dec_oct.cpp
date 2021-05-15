//decimal to octadecimal
#include <iostream>
using namespace std;

int DecToOctal(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;

    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=8;
        ans=ans*10+lastDigit;
    }
    return ans;
}

int main(){
    int a;
    cout<<"Enter the decimal  number\n";
    cin>>a;

    cout<<"The octal equivalent is "<<DecToOctal(a)<<endl;
    return 0;
}