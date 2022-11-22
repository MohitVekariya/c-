#include<iostream>
using namespace std;
class a
{
    public:
            int i,j;
            static void cube(int j)
            {
                for (int i = 1; i <= j; i++)
                {
                    float sum=i*i*i;
		            cout<<"Cube of "<<i<<" is : "<<sum<<endl;
                }
            }            
};
class b
{
    public:
            int m,i;
            static void cube(int m)
            {
                cout<<"==============================================="<<endl;
                for (int i = 1; i <= m; i++)
                {
                    float sum=i*i;
		            cout<<"Square of "<<i<<" is : "<<sum<<endl;
                }
            }
};
int main()
{   
    int j,m;
    cout<<"Enter Range for Cube : ";
    cin>>j;
    cout<<"Enter Range for Square : ";
    cin>>m;
    a::cube(j);
    b::cube(m);
    return 0;
}