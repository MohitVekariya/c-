#include<iostream>
using namespace std;
class sum
{
    public:
        float cube,i;
        int a()
        {
            cout<<"enter the length of cube : ";
		    cin>>i;

		    float cube=i*i*i;
		    cout<<"Cube size is : "<<cube<<endl;
            return 0;
        }
};
class cylinder : public sum
{
    public:
        float size,j,k;
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
int main()
{
    cylinder obj;
    obj.a();
    obj.b();
    return 0;
}