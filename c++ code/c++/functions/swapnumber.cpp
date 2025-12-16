// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter the no : ";
//     cin>>x;
//     cout<<"enter the no : ";
//     cin>>y;
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     cout<<x<<" "<<y;
// }

#include <iostream>
using namespace std;
void swap(int &x, int &y)
{ // int& = inlude the actual address
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x, y;
    cout << "enter the no 1 : ";
    cin >> x;
    cout << "enter the no 2 : ";
    cin >> y;
    swap(x, y);
    cout << x << " \n"<< y;
}