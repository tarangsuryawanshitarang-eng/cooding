#include <iostream>
using namespace std;
int main() {
cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
int arr[] = {2, 4, 6, 8, 10};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<"Your array is: ";
for(int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
cout << endl;
int key = 6, found = -1;
for(int i = 0; i < n; i++) {
if(arr[i] == key) {
found = i;
break;
}
}
if(found != -1) cout << "Element found at index " << found;
else cout << "Element not found";
return 0;
}