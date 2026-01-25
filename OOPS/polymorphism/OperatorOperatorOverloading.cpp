#include <iostream>
using namespace std;
class factor
{
public:
    int num;
    int deno;
    // constructor
    factor(int n, int d)
    {
        num = n;
        deno = d;
    }
    // inline display function
    void display()
    {
        cout << num << "/" << deno << endl;
    }
    // operator overloading function
    factor operator+(factor f)
    {
        factor temp(0, 0);
        temp.num = (f.num * deno) + (num * f.deno);
        temp.deno = deno * f.deno;
        return temp;
    }
};
int main()
{
    factor f1(1, 2);
    factor f2(1, 4);
    factor f3 = f1 + f2; // internally calls f1.operator+(f2)
    f1.display();
    f2.display();
    f3.display();
}