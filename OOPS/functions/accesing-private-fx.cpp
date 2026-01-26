#include <iostream>
using namespace std;
class function{
    private:
    void add(int a , int b){
        cout<<"The sum is : "<<a+b<<endl;
    }
    public:
    void sum(int a , int b){
        add(a,b);
    }
};
int main() {
  function f1;
    f1.sum(5,10);
    return 0;
}