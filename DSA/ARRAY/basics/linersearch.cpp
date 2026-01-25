 #include <iostream>
using namespace std;
int main()
{     
    int arr[] = {1,2,3,4,3,2,1};
    int n = sizeof(arr)/4; 
    int key = 3;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]==key)
        {
             cout<<"yes, index is: "<<i<<endl;
        }
    }

}