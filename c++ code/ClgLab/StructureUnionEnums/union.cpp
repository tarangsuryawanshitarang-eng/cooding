
#include <iostream>
using namespace std;

union money // here size will be of ,what u are using  ie int char float (4,1,4) respectively;
{
  int rice;
  char car;
  float pounds;
};

int main(){
      cout<<"union\n";
  union money m;
  m.rice = 100;
  cout << "corrrect value of rice : " << m.rice << endl;
  m.car = 't';                                                                    // initilisation of another variable
  cout << "value of car : " << m.car << endl;                                     // we have initilise it so , its value is shown correctly
  cout << "garbage value of rice due to decleration of car : " << m.rice << endl; // result in creating garbage value

}