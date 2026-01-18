#include <iostream>
using namespace std;
class human {
    public :
    string gender;
    int age ;

    void display(){
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl;
    }

};

class crickter : public human{
  public :
  int runs;

  // constructor;
    crickter(string g , int a,int r ){
        gender = g;
        age = a;
        runs = r;

    }
     void display(){
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Runs : "<<runs<<endl;
    }

};
int main() {
  crickter c1("male", 25, 1800);
  c1.display();


}