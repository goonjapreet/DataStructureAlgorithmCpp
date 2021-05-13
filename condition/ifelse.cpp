#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please enter your age"<<endl;
    cin>>age;

    if(age>=18){
        cout<<"you can vote."<<endl;
    }
    else{
        cout<<"you are not eligible"<<endl;
    }
    return 0;
}
