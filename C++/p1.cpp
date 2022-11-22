#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for ( i = 1; i < 5; i++)
    {   
        for ( j= 1; j< 9; j++)
        {
        
            if (6-i<=j && 4+i>=j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
    cout<<"\n";
    }
    return 0;
}