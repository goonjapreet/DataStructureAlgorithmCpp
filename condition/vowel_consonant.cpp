//Program to check if an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;

int main(){
    char c; char C;
    int isLowercaseVowel, isUppercaseVowel;
    
    cout<<"enter an alphabet:";
    cin>>c;

    isLowercaseVowel =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    isUppercaseVowel =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(isLowercaseVowel ||isUppercaseVowel)
    cout<<c<<"is a vowel"<<endl;
    else
    cout<<c<<" is a consonant.";
    return 0;

}