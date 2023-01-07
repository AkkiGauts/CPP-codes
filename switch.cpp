#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character from a to e : ";

    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    
    case 'c':
        cout<<"KemCho"<<endl;
        break;

    case 'd':
        cout<<"Kaisenba"<<endl;
        break;

    case 'e':
        cout<<"Fridayaahe ***** "<<endl;
        break;
            
    default:
    cout<<"Aur seekh raha hun bhai"<<endl;
        break;
    }
}