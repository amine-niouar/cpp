

#include <iostream>

using namespace std;

class NoCar
{
    public:
        NoCar(){ cout << "here" << endl;};
};

class Car
{
    public:
        Car(){};
        operator NoCar() {return NoCar();}
};

int main(void)
{
    int t = 15000000;
    t = (t * 10) / 10;

    Car c;

    NoCar no = c;
    //NoCar no = static_cast<NoCar>(c);

    (void)no;

     cout << "t " << t << endl;

    t = 15000000;
    t = (static_cast<double>(t) * 10) / 10;

    cout << "t " << t << endl;
}