#include<iostream>
using namespace std;
class A
{
    public:
        void test()
        {
            cout<<"hello bhagat"<<endl;
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
    obj.test();
    return 0;
}