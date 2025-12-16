#include <iostream>
using namespace std;
#include <vector> // importing vector library
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Size of vector  : " << v.size() << endl;
    cout << "Capacity of vector  : " << v.capacity() << endl;
    v.push_back(4);
    cout << "Size of vector   : " << v.size() << endl;
    cout << "Capacity of vector : " << v.capacity() << endl;
    v.push_back(5);
    cout << "Size of vector   : " << v.size() << endl;
    cout << "Capacity of vector : " << v.capacity() << endl;


    // capacity increses in 2^n manner 
    // size is just number of elements present in vector
}