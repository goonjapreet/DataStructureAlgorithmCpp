#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;

    int rev_num=0;

    while(n>0){
        int rem=n%10;
        rev_num=rev_num*10+rem;
        n=n/10;
    }
    cout<<rev_num<<endl;
    return 0;
}