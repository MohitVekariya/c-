#include<iostream>
using namespace std;
class animal
{
    public:
            virtual void color()=0;
            virtual void voice()=0;
            virtual void habbit()=0;
            virtual void eat()=0;
            void leg()
            {
                cout<<"Animal normally have 4 legs"<<endl;    
            }
            void eye()
            {
                cout<<"Animal normally have 2 eyes"<<endl;
            }
            void tail()
            {
                cout<<"Animal normally have 1 tail"<<endl;
            }
            void mouth()
            {
                cout<<"Animal normally have 1 mouth"<<endl;
            }
            void ear()
            {
                cout<<"Animal normally have 2 ears"<<endl;
            }
};
class dog : public animal
{
    public:
            void color()
            {
                cout<<"Dog color is browen"<<endl;
            }
            void voice()
            {
                cout<<"Dog is barking"<<endl;
            }
            void habbit()
            {
                cout<<"Normally dog have aggressive behaviour"<<endl;
            }
            void eat()
            {
                cout<<"Normally dog eat cookies"<<endl;
            }
            void rabies()
            {
                cout<<"Dog effected with rabies"<<endl;
            }
};
class cat : public animal
{
    public:
            void color()
            {
                cout<<"Cat color is white"<<endl;
            }
            void voice()
            {
                cout<<"Cat's voice is meow meow"<<endl;
            }
            void habbit()
            {
                cout<<"Normally cat have calm behaviour"<<endl;
            }
            void eat()
            {
                cout<<"Normally cat drink milk"<<endl;
            }
};
int main()
{
    dog obj;
    cat obj1;
    obj.leg();
    obj.eye();
    obj.tail();
    obj.mouth();
    obj.color();
    obj.voice();
    obj.habbit();
    obj1.color();
    obj1.voice();
    obj1.habbit();  
    return 0;
}