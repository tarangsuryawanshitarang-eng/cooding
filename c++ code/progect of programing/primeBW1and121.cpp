#include<iostream>
using namespace std;

int main() {
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno BTIR25O1070\n"; 

    for(int i = 2; i <= 121; i++){
        bool x = true;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                x = false;
                 break;
            }
         }
         if (x==true) cout << i <<" ";
     }
}
