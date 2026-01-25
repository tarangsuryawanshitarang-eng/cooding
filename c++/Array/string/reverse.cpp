#include<iostream>
#include<string>    // import
#include<algorithm>
using namespace std;
int main(){
    string s="Tarang Suryawanshi";
       reverse(s.begin(),s.begin()+18);
       cout<<s<<endl;
        reverse(s.begin(),s.begin()+18);
       cout<<s<<endl;
        reverse(s.begin(),s.begin()+6);
       cout<<s<<endl;
        reverse(s.begin(),s.begin()+6);
       cout<<s<<endl;
        reverse(s.begin()+2,s.begin()+5);
       cout<<s<<endl;
}