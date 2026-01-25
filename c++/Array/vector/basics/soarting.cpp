#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 9, 1, 7};
    cout << "before soarting : ";
    for (int x : v)
        cout << x << " ";

        
    sort(v.begin(), v.end()); // ascending

    cout << "\nafter soarting : ";
    for (int x : v)
        cout << x << " ";
}
