#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    cout << "Value of a using pointer: " << *ptr1 << endl;
    cout << "Value of b using pointer: " << *ptr2 << endl;
    cout << "Value of c using pointer: " << *ptr3 << endl;

    cout << "\nAddresses:\n";
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    cout << "&c = " << &c << endl;

    return 0;
}
