//binary to decimal
#include <iostream>
using namespace std;

int bintoDec(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}

int main(){
     int a;
    cout<<"Enter the binary  number\n";
    cin>>a;

    cout<<"The decimal equivalent is "<<bintoDec(a)<<endl;
    return 0;

}