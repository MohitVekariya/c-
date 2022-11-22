#include<iostream>
using namespace std;
class demo
{
    int a=10;
    public:
    void test(int i)
    {
        cout<<"Your previous value is :"<<a<<endl;
        a=i;
        cout<<"Your new value is : "<<a;
    }
};
int main()
{
    int i;
    cout<<"Enter the value : ";
    cin>>i;
    demo obj;
    obj.test(i);
    return 0;
}