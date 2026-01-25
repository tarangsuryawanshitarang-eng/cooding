#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the x coodinate:";
    cin>>x;
     cout<<"enter the y coodinate:";
    cin>>y;
    if(x>0){
        if(y>0) cout<<"first quadrant";
        else cout<<"fourth quadrant";
    }
if(x<0){
   if(y>0) cout<<"second quadrant";
        else cout<<"third quadrant"; 
}
}
