#include<iostream>
using namespace td;

int main()
{
    int i=10, j=20, k;
    k=i-- - i++ - --j;

    cout<<i<<endl;
    cout<<j<<endl;
}