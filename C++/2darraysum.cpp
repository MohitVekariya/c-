#include<iostream>
using namespace std;
int main()
{
	int a[2][2]={{1,2},{4,5}},i,j,sum=0;
	int b[2][2]={{6,1},{3,4}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=a[i][j]+b[i][j];
			cout<<"youe answer is : "<<sum;
		}
		cout<<"\n";
	}
}