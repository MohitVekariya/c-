#include<iostream>
using namespace std;
class 1
{
    public:
        float cube,square,i;
        int a()
        {
            cout<<"enter the value : ";
		    cin>>i;

		    float cube=i*i*i;
		    cout<<"Cube of "<<i<<" is : "<<cube<<endl;
            return 0;
        }
};
class 2 : public 1
{
    public:
        int b()
        {
		    float square=i*i;
		    cout<<"Square of "<<i<<" is : "<<square<<endl;
            return 0;
        }
};
int main()
{
    2 obj;
    obj.a();
    obj.b();
    return 0;
}