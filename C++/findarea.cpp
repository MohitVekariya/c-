#include<iostream>
int volum(float i)
{
		cout<<"enter the length of cube : ";
		cin>>i;

		float sum=i*i*i;
		cout<<"Cube size is : "<<sum<<endl;
}
int volum(float j,float k)
{
		cout<<"enter the cylinder radius : ";
		cin>>j;
		cout<<"enter the cylinder height : ";
		cin>>k;

		float size=(3.14*j*j*k);
		cout<<"Cylinder size is : "<<size<<endl;
}
int volum(float m,float n,float o)
{
		cout<<"enter the rectangle length : ";
		cin>>m;
		cout<<"enter the rectangle width : ";
		cin>>n;
		cout<<"enter the rectangle height : ";
		cin>>o;

		float area=m*n*o;
		cout<<"Rectangle area is : "<<area<<endl;
}
int main()
{
	float i,j,k,m,n,o;
	volum(i);
	volum(i,j);
	volum(i,j,k);
}