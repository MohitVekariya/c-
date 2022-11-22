#include<iostream>
using namespace std;
class a1
{
    public:
        float i,j,k,m,n,o;
        float sum,size,area;
        int a()
        {
            cout<<"enter the length of cube : ";
		    cin>>i;

		    float sum=i*i*i;
		    cout<<"Cube size is : "<<sum<<endl;
            return 0;
        }
};
class a2 : public a1
{
    public:
        int b()
        {
		    cout<<"enter the cylinder radius : ";
		    cin>>j;
		    cout<<"enter the cylinder height : ";
		    cin>>k;

		    float size=(3.14*j*j*k);
		    cout<<"Cylinder size is : "<<size<<endl;
            return 0;
        }
};
class a3 : public a2
{
    public:
        int c()
        {
            cout<<"enter the rectangle length : ";
		    cin>>m;
		    cout<<"enter the rectangle width : ";
		    cin>>n;
		    cout<<"enter the rectangle height : ";
		    cin>>o;

		    float area=m*n*o;
		    cout<<"Rectangle area is : "<<area<<endl;
            return 0;
        }
};
int main()
{
    a3 obj;
    obj.a();
    obj.b();
    obj.c();
    return 0;
}