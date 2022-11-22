#include<iostream>
using namespace std;
class month
{
    public:
            string a;
            int m;
            void getdata()
            {
                cout<<"Enter Month Name : ";
                cin>>a;
            }
            void read()
            {
                if(a=="january")
                {
                    m=1;
                }
                if(a=="fabruary")
                {
                    m=2;
                }
                if(a=="march")
                {
                    m=3;
                }
            }
            void display()
            {
                m=m+1;
                switch (m)
                {
                    case 2:
                            cout<<"Next Month is FEBRUARY";
                            break;
                    case 3:
                            cout<<"Next Month is MARCH";
                            break;
                    default:
                            cout<<"INVALID INPUT";
                            break;
                }
            }
};
int main()
{
    month obj;
    obj.getdata();
    obj.read();
    obj.display();
    return 0;
}