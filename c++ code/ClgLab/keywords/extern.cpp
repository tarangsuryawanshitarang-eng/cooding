#include <iostream>
using namespace std;

int a = 10;   // variable defined globally

void fx() {
    extern int a;   // refers to same global variable (not a new one)
    cout << "Value of a inside fx(): " << a << endl;
}

int main() {
    cout << "Value of a in main(): " << a << endl;
    fx();
    return 0;
}
