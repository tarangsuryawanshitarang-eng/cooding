#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void maxfreq_element(int arr[],int n){
    unordered_map<int,int>has;
    for(int i = 0 ; i <n;i++){
        has[arr[i]]++;
    }
    int maxfreq=0,minfreq=n;
    int maxelement=0,minelement=0;
    //  /*note :--> for assining FOREACH LOOP in maps , us AUTO insteed of any other data type*/
    for(auto i : has){
        if(i.second>maxfreq){
            maxfreq = i.second;
            maxelement = i.first;
            
        }
       else if(i.second<minfreq){
           minfreq = i.second;
           minelement = i.first;
           
        }
    }
    cout<<"The maxelement of array arr is : "<<maxelement<<endl;
    cout<<"The maxfrequency of array arr is : "<<maxfreq <<endl<<endl;  

    cout<<"The minelement of array arr is : "<<minelement<<endl;
    cout<<"The minfrequency of array arr is : "<<minfreq <<endl;

    
    
}
int main() {
    int arr[]={1,2,3,4,1,2,4,3,4,2,3,4,5,6,7,8,2,3,2,2};
    int n = sizeof(arr)/4;
  maxfreq_element(arr,n);
}
