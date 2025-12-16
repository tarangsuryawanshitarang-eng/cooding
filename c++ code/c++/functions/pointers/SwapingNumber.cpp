

#include<iostream>
using namespace std;
void swap(int* x ,int* y){                             // int& = inlude the entire dabba
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x =9;
    int y=8;
    // cout<<"enter the no : ";
    // cin>>x;
    // cout<<"enter the no : ";
    // cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y;
}