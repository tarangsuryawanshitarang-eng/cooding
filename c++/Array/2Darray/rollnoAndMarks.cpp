#include<iostream>
using namespace std;
int main()
{
    string arr[][2]={"roll no" , "marks" , "1" , "100" ,"2" , "80" , "3" , "90"} ;  
        for(int i = 0; i<4 ;i++){
            for(int j = 0  ; j<2 ; j++){
                cout<<arr[i][j]<<" ";
            }
                cout<<endl;
        } 
   
}