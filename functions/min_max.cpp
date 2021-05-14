/*a program with two functions to print the maximum and the
minimum number respectively among three numbers entered by user*/
#include <iostream>
using namespace std;

int maximum(int x, int y, int z)
{
    int Maximum_Value=x;
    if(y>x){
        Maximum_Value=y;
        if(z>y){
        Maximum_Value=z;}
    } 
    
    return Maximum_Value;
}
   

int minimum(int x, int y, int z)
{
    int Minimum_Value=x;
    if(y<x){
        Minimum_Value=y;
        if(z<y) {
        Minimum_Value=z;
        }
    }
       
return Minimum_Value;
}

int main()
{
    int x,y,z;
    cout<<"enter the three numbers:\n";
    cin>>x>>y>>z;
    cout<<"Max is "<<maximum(x,y,z)<<endl;
    cout<<"Min is "<<minimum(x,y,z)<<endl;
}