//to find peak of mountain 

#include <iostream>
using namespace std;
int peak(int arr[] , int n ){
 int left = 0;
 int right = n - 1; 
 while(left <= right){
    int mid = left + (right - left) / 2;
    if(arr[mid-1] > arr[mid] && arr[mid] < arr[mid+1]){
        right = mid - 1;
    }
    else if(arr[mid-1] < arr[mid] && arr[mid] < arr[mid+1]){
        left = mid + 1;
    }
    else{
        return mid;
    }
 }
 return -1;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6,7,8,9, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(int);
  cout<<"peak of mountain is at index :"<<peak(arr,n)<<endl;
}