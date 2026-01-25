#include<iostream>
using namespace std;
int main()
{
    int a=7;
//     cout<<"enter the no: ";
//     cin>>a;
      int arr[a][a] ;
        for(int i = 0; i<a ;i++){
            for(int j = 0  ; j<a ; j++){
               arr[i][j]=a;
            }
        } 
         for(int i = 0; i<a ;i++){
            for(int j = 0 ; j<a ; j++){
                cout<<arr[i][j]<<" ";
            } 
            cout<<endl;
        }
}