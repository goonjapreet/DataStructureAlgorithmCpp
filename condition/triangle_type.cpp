//Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;

int main(){
    int side_A, side_B, side_C;
    cout<<"Enter the three sides of triangle:\n";
    cin>>side_A>>side_B>>side_C;

    if(side_A==side_B && side_B==side_C){
        cout<<"This is an equilateral triangle.\n";
     }
     else if(side_A==side_B||side_A==side_C||side_B==side_C){
         cout<<"This is an isosceles triangle.\n";
     }
     else{
         cout<<"This is a scalene triangle.\n";
     }
     return 0;
}