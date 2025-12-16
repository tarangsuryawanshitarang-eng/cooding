#include <iostream>
using namespace std;

struct employee // size (sum size of all variablr) here 4+1+4=9;
{
  int id;
  char favchar;
  float salary;
};



int main()
{
  cout << "structure\n";
  struct employee tarang;
  struct employee ranjeeet;
  struct employee shras;
  // tarang.id = 1070;
  // tarang.favchar = 'T';
  // tarang.salary = 50000.0;
  tarang={1070,'T',50000.0};      // another way of value putting
  cout << "employe id : " << tarang.id << endl;
  cout << "employe favourite character : " << tarang.favchar << endl;
  cout << "employe salary : " << tarang.salary << endl;



}