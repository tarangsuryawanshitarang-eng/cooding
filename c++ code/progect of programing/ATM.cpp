#include <iostream>
using namespace std;
int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int balance, widrawl;
    balance = 10000;
    cout << "enter the widrawl amount :";
    cin >> widrawl;
    if (widrawl == 0)
        cout << "ERROR\nInvalid widrawl. \n";
    else if (widrawl > balance)
        cout << "Not Enough Balance. \n";
    else if (widrawl <= balance && widrawl % 100 == 0)
    {
        cout << "widrawl Succesfull.\n";
        cout << "New balance is : " << balance - widrawl << endl;
    }
    else
        cout << "Invalid widrawl\n";
}