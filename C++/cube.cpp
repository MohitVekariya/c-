#include<iostream>
using namespace std;
int volum(float j)
{
		cout<<"enter the length for cube : ";
		cin>>j;

        for (int i = 1; i <= j; i++)
        {
            float sum=i*i*i;
		    cout<<"Cube of "<<i<<" is : "<<sum<<endl;
        }
        for (int i = 1; i <= j; i++)
        {
            float sum=i*i;
		    cout<<"Squre of "<<i<<" is : "<<sum<<endl;
        }
        return 0;
}
int main()
{
	float j;
	volum(j);
    return 0;
}