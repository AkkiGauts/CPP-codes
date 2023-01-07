#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int sum=0;
    int originaln = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(1,3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not a Amrstrong Number"<<endl;
    }
    
    
 
    return 0;
}