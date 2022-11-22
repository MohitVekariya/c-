#include<iostream>
using namespace std;
int main()
{
    int pin=1232,amt,n;
    cout<<"Enter your ATM Pin : ";
    cin>>n;
    if(n==pin)
    {
        try
        {
            cout<<"Enter your amount : ";
            cin>>amt;
            if(amt>0)
            {
                cout<<"Transaction is successful";
            }
            else
            {
                throw(amt);
            }
        }
        catch(int a)
        {
            cout<<"Sorry ! You have entered wrong amount ";
        }
    }
    else
    {
        cout<<"You have entered wrong pin";
    }
    return 0;
}