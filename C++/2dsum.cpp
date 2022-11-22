// 2D ARRAY FIND MAXIMUM NUMBER AMONG 2 ARRAY
#include<iostream>
using namespace  std;
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}},i,j,k=0;
	int b[2][3]={{7,8,9},{10,12,11}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(k<a[i][j])
			{
				k=a[i][j];
			}
			if(k<b[i][j])
			{
				k=b[i][j];
			}
		}
	}
    cout<<"Sum of 2 array is : "<<k;
    return 0;
}