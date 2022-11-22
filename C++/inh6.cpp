#include<iostream>
#include<cstring>
using namespace std;
class a
{
    public:
    int i;
    string j;
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
        cout<<"Enter your roll no : "<<endl;
        cin>>i;
        return 0;
    }
};
class c : public a
{
    public:
    int o()
    {
        cout<<"Enter your name : "<<endl;
        cin>>j;
        return 0;
    }
};
class d : public b , public c
{
    public:
    int p()
    {
        cout<<"Entered detail successfully"<<endl;
        return 0;
    }
};
int main()
{
    d obj;
    obj.b::m();
    obj.n();
    obj.o();
    obj.p();
    return 0;
}