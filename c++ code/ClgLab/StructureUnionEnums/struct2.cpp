#include <iostream>
using namespace std;
struct point
{
    int x, y;
};  
int main()
{
    struct point a;
   a = {1,3};
    // cin >> a.x;
    // cin >> a.y;
    cout << a.x;
    cout << endl;
    cout << a.y;
    cout << endl;
}