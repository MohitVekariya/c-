#include<iostream>
using namespace std;
class Student
{
    public:
        void demo()
        {
            cout<<"hello demo"<<endl;
        }
        void demo(int a)
        {
            cout<<a<<endl;
        }
        void demo(int a,int b)
        {
            cout<<a+b<<endl;
        }
        void demo(double a)
        {
            cout<<a<<endl;
        }
};
int main()
{
    Student a;
    a.demo();
    a.demo(10);
    a.demo(10,20);
    a.demo(10.55)
    return 0;
}