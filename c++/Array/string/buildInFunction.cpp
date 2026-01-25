#include<iostream>
using namespace std;
int main(){
    string s="Tarang ";
      cout<<s.length()<<endl;
      cout<<s.size()<<endl;
      s.push_back('a');
      cout<<s<<endl;
      s.pop_back();
       cout<<s<<endl;
       s.append("Suryawanshi");
        cout<<s<<endl;
       s.clear();
        cout<<s<<endl;


        s = s + "Tarang";     // alternate of append
         cout<<s<<endl;
        s = "Suryawanshi " + s;     
         cout<<s<<endl;
        
}
