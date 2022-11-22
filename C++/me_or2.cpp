#include<iostream>
using namespace std;
class I
{
    public:
            void test()
            {
                cout<<"Your previous name is : Mohit"<<endl;
                cout<<"Your previous surname is : Vekariya"<<endl;
            }
};
class J : public I
{
    public:
            void test ()
            {
                cout<<"Your new name is : Man"<<endl;
                cout<<"Your new surname is : Savaliya"<<endl;
            }
};
int main()
{
    I obj1;
    J obj2;
    obj1.test();
    obj2.test();
    return 0;
}