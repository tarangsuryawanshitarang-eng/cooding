#include <iostream> 
using namespace std; 
 
int main() { 
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int a = 5, b = 10; 
    int *p1 = &a, *p2 = &b; 
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    int temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 
 
    cout << "After swap: a = " << a << ", b = " << b; 
    return 0; 
}