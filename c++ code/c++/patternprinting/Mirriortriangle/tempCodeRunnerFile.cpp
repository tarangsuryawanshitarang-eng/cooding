 
    int n=9;
    // cout<<"enter the number :";
    // cin>>n;
for(int i=1;i<=n;i++){                  // ulta triangle of spaces
     for(int j=1;j<=n-i;j++){
         cout<<"  ";
    }
     
    for(int j=1;j<=i;j++){             // triangle of *
         cout<<"* ";
    }
    cout<<endl;
}