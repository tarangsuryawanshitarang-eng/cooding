#include <iostream>
#include <vector>
using namespace std;

//<!-- Merging Two Sorted Halves -->
void Merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }

    while(left <= mid) temp.push_back(arr[left++]);
    while(right <= high) temp.push_back(arr[right++]);
    
    for(int i = low; i <= high; i++) arr[i] = temp[i - low];
}

//<!-- Merge Sort Function -->
void MergeSort(int arr[],int low , int high){
    if(low>=high) return;   //<!-- Base Case -->
    int mid = low + (high - low) / 2;
    MergeSort(arr,low,mid); //<!-- Left Half -->
    MergeSort(arr,mid+1,high); //<!-- Right Half -->
    Merge(arr,low,mid,high); //<!-- Merging Both Halves -->`
}

int main() {
  int arr[] = {1,51,1,2,4,4,6,7,8,91,2,6,7,8,3,4,2,9};
  int n = sizeof(arr) / sizeof(int);

 //<!-- Original Array -->
  for(int a : arr) cout<<a<<" ";
    cout<<endl;

  MergeSort(arr,0,n-1);  //<!-- Calling Merge Sort -->

    //<!-- Sorted Array -->
  for(int a : arr) cout<<a<<" ";

}