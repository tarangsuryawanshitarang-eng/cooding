#include <iostream>
using namespace std;
int main()
{
    int arr[2][2][2] ;
    //taking values
     cout<<"start entering : ";
    for (int i = 0; i < 2; i++)
    {  
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> arr[i][j][k];
            }

        }
    }
    
    //printing values
    for (int i = 0; i < 2; i++)
    {  cout<<"layer: "<<i<<"\n";
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout<<endl;
        }
    }
}
