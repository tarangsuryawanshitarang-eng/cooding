#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v(10);
    // when size is given, default values are 0
    for (int i = 0; i < 10; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
}





