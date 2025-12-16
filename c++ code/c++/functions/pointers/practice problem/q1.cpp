// create a function to calc re and circumference of circle
#include <iostream>
using namespace std;
float circumference(int radius)
{
    const float PI = 3.14;
    float a = 2 * PI * radius;
    return a;
}

float area(int radius)
{
    const float PI = 3.14;
    float area = PI * radius * radius;
    return area;
}
int main()
{
    int r = 3;
    cout << "area: " << area(r);
    cout << endl;
    cout << "circumference: " << circumference(r);
}
