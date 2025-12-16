//   O(1) in avg/best case senerios;
// o(n) in wort ( i in billion )


// calculating the frequency using map;
#include <bits/stdc++.h>
using namespace std;
int main() {

  int arr[]={1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6};
  // initiilsation of map
  unordered_map<int ,int > m;
  for(int i = 0 ; i < sizeof(arr)/4; i++){
      m[arr[i]]++;

  }
  for(auto i : m){
    cout<<"element : "<<i.first<<" "<<"frequency : "<<i.second<<endl;
  }
  
}