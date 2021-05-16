#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows\n";
    cin>>n;

    for(int i=n;i>=1;--i){//--i first do then increment
        for(int j=1;j<=i;++j)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1*/