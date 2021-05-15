//octadecimal to decimal
#include <iostream>
using namespace std;

int octToDec(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}

int main(){
     int a;
    cout<<"Enter the octal number\n";
    cin>>a;

    cout<<"The decimal equivalent is "<<octToDec(a)<<endl;
    return 0;

}