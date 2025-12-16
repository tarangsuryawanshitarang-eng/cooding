#include <iostream>
using namespace std;
int sorting(int arr[],int & n){
    int count=0;
   for(int i = 0 ; i<n;i++){
    if(arr[i]==0){ count++;}
   
   }
   return count;    
}
int main() {
  int arr[]={0,1,0,1,1,0,0,1,0};
  int n=9;
  cout<<"Original array : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  int count = sorting(arr,n);
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int i=count;i<n;i++){
        arr[i]=1;
    }
    cout<<"Sorted array : ";
    for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
}