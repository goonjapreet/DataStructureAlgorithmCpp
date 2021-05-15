#include <iostream>
using namespace std;

int reverse(int n){
    int ans=0;
    while(n>0){
        int lastDigit=n&10;
        ans=ans;
        n/=10;
    }  
    return ans;
}

int addBinary(int a,int b)
{
    int ans=0; int prevCarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if((a%2==0 && b%2==0)|| (a%2==1 && b%2==0)){
            if(prevCarry==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+prevCarry;
            prevCarry=1;
        }
        a=a/10;b=b/10;
    }
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+(a%2);
            a=a/10;
        }
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+(b%2);
            b/=10;
        }
    }
}

int main(){
    int a,b;
    cout<<"Enter the decimal  number\n";
    cin>>a>>b;

    cout<<"The octal equivalent is "<<addBinary(a,b)<<endl;
    return 0;
}