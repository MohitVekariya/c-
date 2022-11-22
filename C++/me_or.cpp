#include<iostream>
using namespace std;
class A
{
    public:
        void demo()
        {
            cout<<"hello mohit"<<endl;
        }
};
class B : public A
{
    public:
        void demo()
        {
            cout<<"hello bhautik"<<endl;
        }
};
int main()
{
    B obj;
    obj.demo();
    return 0;
}