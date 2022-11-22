#include<iostream>
using namespace std;
class test
{
    public:
    void demo()
    {
        cout<<"Hello"<<endl;
    }
    test()
    {
        cout<<"Hii";
    }
};
int main()
{
    test obj;
    obj.demo();
    return 0;
}