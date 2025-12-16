#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    int *arrp[3] = {ptr1, ptr2, ptr3};
    int *brrp[3] = {ptr1, ptr2, ptr3};

    if(arrp[0] == brrp[0])
        cout << "Both arrays store same pointer.\n";
    else
        cout << "Pointers are different.\n";

    cout << "\nAddresses in arrp:\n";
    for(int i = 0; i < 3; i++)
        cout << "arrp[" << i << "] = " << arrp[i] << endl;

    cout << "\nAddresses in brrp:\n";
    for(int i = 0; i < 3; i++)
        cout << "brrp[" << i << "] = " << brrp[i] << endl;

    return 0;
}
