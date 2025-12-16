#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v; // declaration of vector

    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);


    int a;
    cout << "Enter the element to find its max position:  ";
    cin >> a;
    int occurance = -1;

    for (int i = 0; i < 6; i++)
    {
        if (v[i] == a)
        {
            occurance = i;
        }
    }
    cout << "The last occurance of the element is at index: " << occurance;
}