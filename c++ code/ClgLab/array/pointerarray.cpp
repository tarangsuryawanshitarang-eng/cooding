#include <iostream>
using namespace std;
int main()
{
    // int a = 10, b = 20, c = 30;
    // int *arr[] = {&a, &b, &c};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << *(arr[i]) << " ";
    // }

    int brr[]={10,20,30};
    int* p = brr;
    int **z=&p;
    cout << z << " "<< *z << " " << brr<< " " << **z << endl;
    for (int i = 0; i < 3; i++) {
        cout << *(p+i) << " ";
    }

}