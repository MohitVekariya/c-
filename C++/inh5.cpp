#include<iostream>
#include<cstring>
using namespace std;
class a
{
    public:
    int i,k;
    string j,l;
    int m()
    {
        cout<<"Welcome"<<endl; 
        return 0;  
    }
};
class b : public a
{
    public:
    int n()
    {
        cout<<"Enter your details : ";
        return 0;
    }
};
class c : public a
{
    public:
    int o()
    {
        cout<<"Enter your roll no : ";
        cin>>i;
        return 0;
    }
};
class d : public b
{
    public:
    int p()
    {
        cout<<"Enter your name : ";
        cin>>j;
        return 0;
    }
};
class e : public b
{
    public:
    int q()
    {
        cout<<"Enter your age : ";
        cin>>k;
        return 0;
    }
};
class f : public c
{
    public:
    int r()
    {
        cout<<"Enter your faculty : ";
        cin>>l;
        return 0;
    }
};
class g : public c 
{
    public:
    int s()
    {
        cout<<"Details entered successfully";
        return 0;
    }
};
int main()
{
    d obj;
    e obj1;
    f obj2;
    g obj3;
    obj.m();
    obj.n();
    obj.p();
    obj1.q();
    obj2.o();
    obj2.r();
    obj3.s();
    return 0;
}