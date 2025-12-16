#include <iostream>
using namespace std;
int main()
{
    //     char x = 'a';
    //     char *p = &x;
    //     cout << x << " " << p  << *p <<"\n";

    //    cout << sizeof(p) ;

    int x = 10 ;
    int y = 20 ; 
    int z = 30 ; 

    int *arr[] = {&x ,&y ,&z};
   for (int i = 0 ; i < 3 ; i++ ){
     cout<<arr[i]<<" ";
     
     cout<<*arr[i]<<endl;
   }
}