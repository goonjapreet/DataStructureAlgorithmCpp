#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
     
}

int main(){
    int a, b;
    cout<<"Enter the value of a:\n";
    cin>>a;
    cout<<"Enter the value of b:\n";
    cin>>b;
    swap(a,b);
    cout<<"Value of a after swapping "<<a<<endl;
    cout<<"Value of b after swapping "<<b<<endl;
    return 0;
}