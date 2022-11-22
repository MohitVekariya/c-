#include<iostream>
using namespace std;
class A
{
    public:
        virtual void demo()
        {
            cout<<"hello class A"<<endl;
        }
};
class B:public A
{
    public:
        void demo()
        {
            cout<<"hello class B"<<endl;
        }
};
int main()
{
    B b;
    A *a=&b;
    a->demo();
    return 0;
}