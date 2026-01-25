#include<iostream>
using namespace std;
int main()
{
    int arr[][3]={ {1,2,3} , {4,5,6} } ;          // giving value of columns is necessary  
    // // input value of 0th column               // without  inside courly bracess will lead to no error
    // int arr[2][3];
    // cout<<"enter the 0th row: ";
    // for(int i = 0; i<3 ;i++)       
    // {
    //     cin>>arr[0][i];
    // } 

     //input value of 1st column
    //  cout<<"enter the 1st row: ";
    //  for(int i = 0; i<3 ;i++)         
    // {
    //     cin>>arr[1][i];
    // }
        for(int i = 0; i<2 ;i++)       // rows
        {
            for(int j = 0  ; j<3 ; j++)             // columns
            {
                cout<<arr[i][j]<<" ";
            }
                cout<<endl;
        } 
   
}