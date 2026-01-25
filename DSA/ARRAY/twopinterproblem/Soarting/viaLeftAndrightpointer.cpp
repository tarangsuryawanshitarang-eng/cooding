#include <iostream>
using namespace std;
#include <vector>
void sorting(vector<int>&v,int & n){
    int left=0;
    int right=n-1;
    while(left<right){
        if(v[left]==0){
            left++;
        }
        else if(v[right]==1){
            right--;
        }
        else{
            swap(v[left],v[right]);
            left++;
            right--;
        }
      
    }
}
int main() {
  vector<int>v={1,0,1,1,1,0,1,1,0,0,1,0,0,0,1};
    int n=v.size();
    cout<<"Original array : ";
    for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sorting(v,n);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}