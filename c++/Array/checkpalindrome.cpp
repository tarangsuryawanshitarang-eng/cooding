
 #include <iostream>
using namespace std;
int main()
{     
    int arr[] = {1,2,3,4,3,2,1};
     int n = sizeof(arr)/4; 
     bool x=true;          // formate
     int i =0;
     int j =n-1;
     while(i!=j)
     {
       if( arr[i] == arr[n-1-i]) x=true;
       else 
       {
         x=false;
         break;
       }
       i++;
       j--;
     }
   if(x==true) cout<<"It is a palondrome \n";
   else cout<<"It isn't a palondrome \n";
}