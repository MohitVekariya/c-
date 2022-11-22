#include<iostream>
using namespace std;
class info
{
    public:
    void test()
    {
        cout<<"Welcome"<<endl;
        cout<<"Enter your details"<<endl;
    }
    void test(string a)
    {
        cout<<"Enter your name : ";
        cin>>a;
    }
     void test(int b)
    {
        cout<<"Enter your roll no : ";
        cin>>b;
    }
    void test(float c)
    {
        cout<<"Enter your previous marks : ";
        cin>>c;
    }
};
int main()
{
    int b;
    string a;
    float c;
    info obj;
    obj.test();
    obj.test(a);
    obj.test(b);
    obj.test(c);
    return 0;
}