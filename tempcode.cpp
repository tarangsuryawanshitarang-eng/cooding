#include <iostream>
using namespace std;
int main() {
    string s[] = {"apple", "banana", "apple", "orange", "banana", "apple"};
    
    for (int i = 0; i < 6; i++) {
        cout<<s[i]<<endl;
       
    }
    
      cout<<sizeof(s)/sizeof(s[0])<<endl; // size of array

}       