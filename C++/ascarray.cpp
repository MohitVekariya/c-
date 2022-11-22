#include<iostream>
using namespace std;
int main()
{
    int a[5],j,k=0,i;
    for (i = 0; i < 5; i++)
    {
        cout<<"Enter "<<i<<" value : ";
        cin>>a[i];
    }
    for(int i = 0; i < a[i]; i++)
		{
			for(j = i+1; j < 5; j++)
			{
				if(a[j] < a[i])
				{
					k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
        cout<<"number in ascending order of array is : "<<a[i]<<endl;
		}
}