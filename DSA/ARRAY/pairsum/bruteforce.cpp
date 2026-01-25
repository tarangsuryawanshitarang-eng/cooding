#include <iostream>
using namespace std;
int main() {
  int arr [] = {2,7,11,15};
  int n = sizeof(arr)/4;

  int key =9 ;

   for (int i = 0 ; i < n ;i++){
    for (int j = i+1 ; j < n ;j++){
  
     if(arr[i]+arr[j]==key) cout<<"found the key sum \nAt index "<<i<<","<<j<<"  \n";
   }
   }
}