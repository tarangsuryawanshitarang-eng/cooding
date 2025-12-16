#include <iostream>
using namespace std;
int main() {
    cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";

int arr[] = {12, 45, 23, 51, 19, 8};
int n = sizeof(arr)/sizeof(arr[0]); 

cout<<"your array is : ";
for(int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
cout<<endl;

int max =  arr[0], min = arr[0];
for(int i = 1; i < n; i++) {
if(arr[i] > max) max = arr[i];
if(arr[i] < min) min =arr[i];
}
cout << "Max= " << max << ", Min = " << min;
return 0;
}
