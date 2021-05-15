#include <iostream>
using namespace std;

bool check(int x, int y, int z){
    int a=max(x, max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
       return true;
    return false;
}

int main(){
    int a,b,c;
    cout<<"Enter the numbers\n";
    cin>>a>>b>>c;
    ;
    cout<<"If it is a pytharoean triplet "<<check(a,b,c)<<endl;
    return 0;

}