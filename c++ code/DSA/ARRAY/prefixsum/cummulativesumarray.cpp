#include <iostream>
using namespace std;
int main() {
  int arr[]={2,3,4,5,6,2,4,};
  int n = 7;
  cout<<"Original array : ";
  for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
  for(int i = 1 ; i < n ;i++){
    arr[i]=arr[i]+arr[i-1];
  }
  cout<<"\nCummulative sum array : ";
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
}