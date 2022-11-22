#include<iostream>
using namespace std;
class a
{
    public:
    int i,j;
    int m()
    {
        cout<<"Welcome"<<endl; 
        return 0;  
    }
};
class b
{
    public:
    int n()
    {
        cout<<"Here is your details"<<endl;
        return 0;
    }
};
class c : public a , public b
{
    public:
    int o()
    {
        i=164;
        j=2021051008;

        cout<<"Your roll no is : "<<i<<endl;
        cout<<"Your SPID is : "<<j;

        return 0;
    }
};
int main()
{
    c obj;
    obj.m();
    obj.n();
    obj.o();
    return 0;
}