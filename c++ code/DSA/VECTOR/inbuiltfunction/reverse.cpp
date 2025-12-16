#include <iostream>
#include <vector>
#include <algorithm> // for inbuilt reverse function
using namespace std;
int main()
{
    int k = 2; // number of elements to reverse from start
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Original Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;


    // part 1
    reverse(v.begin(), v.end());


    // part 2
    reverse(v.begin(), v.begin() + k);
    

    // part 3
    cout << "Ans : ";
    reverse(v.begin() + k, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}