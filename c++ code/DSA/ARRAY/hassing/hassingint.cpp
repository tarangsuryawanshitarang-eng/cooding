#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,3,41,2,2,3,3,3,4,5,1,8,9,10};
 int n = sizeof (arr)/4;
 
 
 
 //ceating another array (frequency array ) that stores all he elements of array ;
 
 //*query are 12; *
int hass[13]={0};
for(int i = 0 ; i < 13;i++){
    if(hass[arr[i]] +=1);

}
int q;
cout<<"enter thes number of Queries : ";
cin >>q;
while (q>0)
{
    int n ;
    cout<<"enter the searching number : ";
    cin >> n;

    cout<<"the frequensy of " <<n<<" is : "<<hass[n];


     q--;
}

}