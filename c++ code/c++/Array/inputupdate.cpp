#include <iostream>
using namespace std;
int main()
{
int x[5];     // decleration
// x[0]=1;       // initilatization (value puting)
// x[1]=2;  
 
// better initilisaton using loop
cout<<"enter the array : ";
for(int i =0;i<5 ; i++)
{                                // input values
cin>>x[i];
}

for(int i =0;i<5 ; i++)
{
cout<<x[i]<<" ";                    // print values
}
                                
  cout<<endl;                       // updating using index
  x[3]=600;
 cout<<"change position's indec is : 3 \nchange value is : "<< x[3];
  cout<<endl;
  
  for(int i =0;i<5 ; i++)
{
cout<<x[i]<<" ";                   // printing whole array
}
}