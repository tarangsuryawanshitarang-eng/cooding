#include <iostream>
using namespace std;
#include <vector>
int main() {
  vector<int> v={2,3,4,5,6,2,4,};
    int n = v.size();
    cout<<"Original array : ";
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }

    for(int i = 1 ; i < n ; i++){
        v[i]=v[i]+v[i-1];
    }
    cout<<"\nCummulative sum array : ";
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
}