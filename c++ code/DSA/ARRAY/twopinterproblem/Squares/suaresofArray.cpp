#include <iostream>
using namespace std;
int main() {
  int arr[]={-4, -1, 0, 3, 10, -2, 5, -6, 7, -3, 8, 9, -5, 2};
  int n=14;

  cout<<"Original array : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


  //soarting the array
  for (int i = 0 ; i <n;i++){
    for(int j=i+1;j<n;j++){
        if(abs(arr[i])>abs(arr[j])){
            swap(arr[i],arr[j]);
        }
    }
  }

  cout<<"\nSorted   array : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

for(int i=0;i<n;i++){
    arr[i]=arr[i]*arr[i];
  }
  cout<<"\nSquares  array : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}