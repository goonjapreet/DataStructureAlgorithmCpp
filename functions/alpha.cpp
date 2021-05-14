#include <iostream>
using namespace std;
 
void charCheck(char input_char)
{
    
    if ((input_char >= 'A' && input_char <= 'Z')
        || (input_char >= 'a' && input_char <= 'z'))
        cout << " Alphabet ";
 
    
    else if (input_char >= 48 && input_char <= 57)
        cout << " Digit ";
 
    
    else
        cout << " Special Character ";
}
 
int main()
{   
    char input_char;
    cout<<"Enter a number\n";
    cin>>input_char;
    charCheck(input_char);
    return 0;
}