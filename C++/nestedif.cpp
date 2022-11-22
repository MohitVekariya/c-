#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;

    cout<<"enter a value : ";
    cin>>a; 
    cout<<"enter b value : ";
    cin>>b;
    cout<<"enter c value : ";
    cin>>c;
    cout<<"enter d value : ";
    cin>>d;

    if (a<b)
    {
        if (b<c)
        {
            if (c<d)
            {
                cout<<d<<" is maximum";
            }
            else
            {
                cout<<c<<" is maximum";
            }
        }
        else 
        {
            if(b<d)
            {
                cout<<d<<" is maximum";
            }
            else
            {
                cout<<b<<" is maximum ";
            }
        }
    }
    else
    {
        if (a<c)
        {
            cout<<c<<" is maximum";
            if(a<d)
            {
                cout<<d<<" is maximum";
            }
            else
            {
                cout<<a<<" is maximum";
            }
        }
        else
        {
            cout<<c<<" is maximum";
        }
    }
}