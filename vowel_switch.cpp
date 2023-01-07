#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a alphabet : ";
    cin>>c;

    cout<<"Your entered alphabet is : "<< c <<"\n" ;

    switch (c)
    {
    case 'a':
        cout<<"It is a vowel"<<endl;
        break;

    case 'i':
        cout<<"It is a vowel"<<endl;
        break;

    case 'e':
        cout<<"It is a vowel"<<endl;
        break;

    case 'o':
        cout<<"It is a vowel"<<endl;
        break;

    case 'u':
        cout<<"It is a vowel"<<endl;
        break;

    default:
    cout<<"This alphabet is not a vowel"<<endl;
        break;
    }


    return 0;
}