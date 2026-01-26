// Create a class named Car and a object array,+ do not use any other function use just constructor to create it
#include <iostream>
using namespace std;

class Car
{
    string name;
    int price;

public:
    Car(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
    }
};
int main()
{
    Car c[3] = {Car("BMW", 50000), Car("Audi", 60000), Car("Honda", 40000)};
    for (int i = 0; i < 3; i++)
    {
        c[i].display();
    }
    return 0;
}
  