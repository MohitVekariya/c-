#include<iostream>
using namespace std;
int array(int a[])
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        cout<<"your value = "<<a[i]<<endl;
    }
    return 0;
}
int main()
{
    int a[5],i;
    cout<<"Enter value : ";
    for ( i = 0; i <5; i++)
    {
        cin>>a[i];
    }
    array(a);
}