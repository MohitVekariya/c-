#include<iostream>
using namespace std;
class A
{
    public:
        virtual void color()=0;
        virtual void eye()=0;
        void demo()
        {
            cout<<"hello demo"<<endl;
        }
};
class B : public A
{
    public:
        
        void color()
        {
            cout<<"color is white"<<endl;
        }
        void eye()
        {
            cout<<"blue eyes"<<endl;
        }
        void text()
        {
            cout<<"hello text"<<endl;
        }
};
int main()
{
    B obj;
    obj.color();
    obj.eye();
    obj.demo();
    obj.text();
}