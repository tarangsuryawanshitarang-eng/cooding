#include <iostream>
using namespace std;
int main()
{
      int arr[][3]={ {1,2,3} , {4,5,6} } ; 
    int mn = INT8_MAX;
    for(int i = 0 ; i < 2 ; i++) { 
     for(int j = 0; j<3 ; j++)
     mn = min(mn, arr[i][j]);
    }
         cout<<"minimum value : "<<mn<<endl;
} 