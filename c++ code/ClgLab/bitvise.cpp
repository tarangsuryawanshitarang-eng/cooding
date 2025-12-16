#include <iostream>
using namespace std;
int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int a = 4;
    int b = 5;
    cout <<"(a ^ b) : "<< (a ^ b) << endl;  // xor
    cout << "(a & b) : " << (a & b) << endl;  // and
    cout << "(a | b) : " << (a | b) << endl;  // or
    cout << "(~a) : " << (~a) << endl;     // not
    cout << "(~b) : " << (~b) << endl;     // not
    cout << "(b << 1) : " << (b << 1) << endl; // leftshift
    cout << "(a << 1) : " << (a << 1) << endl; // leftshift
    cout << "(a >> 1) : " << (a >> 1) << endl; // right shift
    cout << "(b >> 1) : " << (b >> 1) << endl; // right shift
}
