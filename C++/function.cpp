#include<iostream>
using namespace std;
int sum(int no1,int no2)
{
    int c;
    c=no1+no2;
    cout<<"sum of your value is : "<<c<<endl;
    return 0;
}
int main()
{
    int a,b;
    cout<<"enter your first value : ";
    cin>>a;
    cout<<"enter your second value : ";
    cin>>b;
    sum(a,b);
}