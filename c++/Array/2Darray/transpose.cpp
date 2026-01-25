#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];
    // input value of 0th column
    cout<<"enter the 0th row: ";
    for(int i = 0; i<3 ;i++)       
    {
        cin>>arr[0][i];
    } 
     //  input value of 1st column
     cout<<"enter the 1st row: ";
     for(int i = 0; i<3 ;i++)         
    {
        cin>>arr[1][i];
    }
         for(int j = 0  ; j<3 ; j++)       // see the formate i.e -> " interchange the loop of i with j "   
        {
              for(int i = 0; i<2 ;i++)         
            {
                cout<<arr[i][j]<<" ";
            }
                cout<<endl;
        } 
   
}