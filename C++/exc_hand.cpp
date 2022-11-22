#include<iostream>
using namespace std;
int main()
{
    int id=70162,pass=1232;
    int m,n,amt;
    cout<<"Enter your ID : ";
    cin>>m;
    cout<<"Enter your Password : ";
    cin>>n;
    if(m==id && n==pass)
    {
        cout<<"Lgin Successfully"<<endl;
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
        catch(int amt)
        {
            cout<<"Sorry ! You have entered wrong amount ";
        }
    }
    else
    {
        if (m != id)
        {
                cout<<"Sorry ! You have entered wrong ID";
        }
        else
        {
                cout<<"Sorry ! You have entered wrong Password";
        }
    }
    return 0;
}