#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, c = 30;
    cout << "addres of a b c are : ";
    cout << &a << " " << &b << " " << &c << endl;

cout<<endl;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    cout << "values of p1 p2 p3 are : ";
    cout << p1 << " " << p2 << " " << p3 << endl;

    cout << "values in *p1 *p2 *p3 are : ";
    cout << *p1 << " " << *p2 << " " << *p3 << endl;
    cout << "address of &p1 &p2 &p3 are : ";

    cout << &p1 << " " << &p2 << " " << &p3 << endl;
cout<<endl;


    int **arr[] = {&p1, &p2, &p3};
    cout << "address of arr, *arr, **arr are : ";
    cout << arr << " " << *arr << " " << **arr <<" "<<***arr<< endl;
    cout<<"addres of arraay: "<<arr;
cout<<endl;

    int ***ptr = arr;
    cout << "address of ptr, *ptr, **ptr, ***ptr are :";
    cout << ptr << " " << *ptr << " " << **ptr << " " << ***ptr << endl;
    cout<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        cout << *(arr[i]) << " \n";
       
    }

}