#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    string engtype;
    int seatcap;
    double milage;

    void carentry(int carno)
    {
        cout << "enter car "<<carno<<" details" << endl;
        cin >> name >> engtype >> seatcap >> milage;
    }

    void cardata(int carno)
    {
        cout << "car "<<carno<<" details is " << endl;
        cout << "car name is " << name << endl;
        cout << "car milage is " << engtype << endl;
        cout << "car seatcap is " << seatcap << endl;
        cout << "car name is " << milage << endl;
    }
};

int main()
{
    Car c1,c2;
    c1.carentry(1);
    c2.carentry(2);
    c1.cardata(1);
    c2.cardata(2);

    return 0;
}