#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;

    char op;
    cout<<"Choose one operator from + , - , * , / : \n";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;

    case '-':
        cout<<n1-n2<<endl;
        break;

    case '*':
        cout<<n1*n2<<endl;
        break;

    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Please choose from the above operator"<<endl;
        break;
    }


    return 0;
}