#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int *ptr = &a;

    cout << a << " " << ptr << "  " << *ptr << endl;
    cout << &ptr << endl;

    bool c = (ptr == &a);
    cout << c<<endl;

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    cout << *p + 1 << endl;
    cout << *p + 2 << endl;   // addres ki value mai + 2;
    cout << *(p + 1) << endl; // address ka 1 aage ;
    cout << *(p + 2) << endl;

    int *p1 = &arr[0];
    int *p2 = &arr[4];
    cout<<*p2-*p1<<endl;
    cout<<*p1-*p2<<endl;


}