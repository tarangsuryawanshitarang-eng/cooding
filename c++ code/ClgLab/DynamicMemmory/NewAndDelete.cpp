#include <iostream>
using namespace std;
int main()
{  // creating an integer using d.memeory
    int *a = new int;
    *a = 5;
    cout << *a << endl;
    delete a;
    a = new int;
    *a = 7;
    cout << *a<< endl;

    // creating an array using D .memory
    
    int* arr = new int[6];
    int values[] = {1,2,3,4,5,6};
    for(int i = 0; i < 6; i++){
        arr[i] = values[i];
    }
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;

}