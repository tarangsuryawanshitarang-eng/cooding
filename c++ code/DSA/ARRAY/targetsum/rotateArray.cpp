#include <iostream>
using namespace std;
int main() {
  int arr[]={1,2,3,4,5};
  int n=5;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int k=2; // rotate by 2
  k=k%n; // if k is greater than n
  int j = 0;
  int ansarr[n];
  for(int i=n-k;i<n;i++){
    ansarr[j]=arr[i];
    j++;
  }
  // j becomes 4 now .
  for(int i=0;i<n-k;i++){
    ansarr[j]=arr[i];
    j++;
  }
  for(int i=0;i<n;i++){
    cout<<ansarr[i]<<" ";
  }

}