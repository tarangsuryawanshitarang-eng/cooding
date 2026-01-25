#include <iostream>
using namespace std;
#include <vector>   // importing vector library
int main()
{
   // vector<int> v; // abhi size 0 hai ; declaration of vector


    // another method of declaration
     vector<int> v = {1,2,3,4,5}; 
    

    // another one!!
    // vector<int> v(5,100); //  **size 5 , **all values 100;


    for(int i : v) // this is called for each loop , i value storw karega yaha pr
    {
        cout << i << " ";
    }
}