#include<iostream>
using namespace std;
class demo
{
    public:
    void test(int a,int b)
    {
        a=a+b;
        b=a-b;
        a=a-b;

        cout<<"1 value is : "<<a<<endl;
        cout<<"2 value is : "<<b<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"Enter 1 value : ";
    cin>>a;
    cout<<"Enetr 2 value : ";
    cin>>b;
    demo obj;
    obj.test(a,b);
    return 0;
}