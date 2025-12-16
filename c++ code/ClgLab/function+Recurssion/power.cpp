#include <iostream>
using namespace std;
int power(int x, int n) {
    if (n == 0) return 1;            // base case
    else if (n==1) return x;       // base case
    return x * power(x, n - 1);     // work + call
}
int main() {
    int x, n;
    cout << "Enter base : ";
    cin >> x;
    cout << "Enter exponent : ";
    cin >> n;
    cout << x << " raised to the power " << n << " is: " << power(x, n) << endl;
    return 0;

}50