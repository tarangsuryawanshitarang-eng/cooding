#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v;
    // when not given size, default size is 0
    // i nai chiye tho naya element int a kar ke cin karo us ko push back kar do.
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    cout << endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v[0] = 100;
     for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }


    
}  