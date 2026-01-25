#include <iostream>
using namespace std;
#include <vector>   // importing vector library
int main()
{
    vector<int> v; // abhi size 0 hai ; declaration of vector
   
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;


    v.push_back(10); // inserting value in vector
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;

    v.push_back(20);
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;

    v.push_back(30);
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;  

    v.resize(5); // resizing vector
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;

    v.resize(10); // resizing vector
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;

    v.resize(14);
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;

    v.erase(v.begin()+2);
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
     

    v.resize(21);
    cout << v.size()<<endl; 
    cout << v.capacity()<<endl;


    v.clear();
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
}