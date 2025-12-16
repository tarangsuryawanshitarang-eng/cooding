#include<iostream>
using namespace std;
int main() {
    cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
    // Predefined username and password
    string USERNAME = "Tarang_Suryawanshi";
    string PASSWORD = "123456789";
    string username,password;
    cout<<"enter the username: ";
    cin>>username;
     cout<<"enter the passward: ";
    cin>>password;
    if(username == USERNAME) 
    {
        if(password == PASSWORD) cout<<"login succesfull.\n";
        else cout<<"invalid password.\n";
    }
    else cout<<"invalid username.\n";
   
}


