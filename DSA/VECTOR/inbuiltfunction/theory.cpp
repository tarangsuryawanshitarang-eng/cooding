//{ vector functions in C++
// size(),
// capacity(),
// push_back(),
// pop_back(),
// resize(),
// erase(),
// clear()
//front() and back()
// at()
//}
#include <iostream>
using namespace std;
#include <vector> // importing vector library
int main()
{
    vector<int> v = {10, 20, 30, 40, 50}; // abhi size 0 hai ; declaration of vector
    cout << "your vector elements are : ";
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    cout << "v.size() = " << v.size() << endl;
    cout << "v.capacity() = " << v.capacity() << endl;

    v.push_back(60); // inserting value in vector  //**last mai hi add ho ga  */
    cout << "your vector elements are after pushback : ";
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    v.pop_back(); //**last wala hi remove hoga */
    cout << "your vector elements are after popback : ";
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;
    cout<<"v.front() = "<<v.front()<<" first element"<<endl; // first element
    cout<<"v.back() = "<<v.back()<<" last element"<<endl;  // last element

    // **accessing elements at particular index 
    cout<<"v.at(2) = "<<v.at(2)<<endl; // element at index 2


    // by using them , updating values can be done also.
}