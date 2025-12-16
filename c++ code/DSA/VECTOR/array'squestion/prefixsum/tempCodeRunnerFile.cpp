#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v = {2, 3, 4, 1, 6, 5, 8, 7};
    int n = v.size();

    cout << "Original array : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }cout<<endl;

    vector<int> prefixsum(n);
    vector<int> sufixsum(n);   // keep same spelling everywhere

    prefixsum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + v[i];
    }

    sufixsum[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sufixsum[i] = sufixsum[i + 1] + v[i];
    }

    // checking equality
    for (int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n ; j++){
            if(prefixsum[i]==sufixsum[j]){
                cout<<"found Equal at index : "<<i<<" and "<<j<<endl;
            }