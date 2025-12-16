#include<iostream>
using namespace std;
int main() {
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno BTIR25O1070\n"; 
    int count = 0;
    int i = 2;     
    while (count < 100) {
        bool x = true;   
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
            x = false;
            break;
            }
        }
            if (x==true) {
            cout << i <<"  ";
            count++;
        }
        i++;
    }
}
