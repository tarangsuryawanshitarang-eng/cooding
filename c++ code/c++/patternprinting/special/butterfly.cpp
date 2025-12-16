#include<iostream>
using namespace std;

int main() {
    int n = 9;

    // upper half
    for(int i = 0; i < n; i++) {
        // left stars
        for(int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        // middle spaces -> single space per count
        for(int j = 0; j < n - i - 1; j++) {
            cout << "    ";
        }
        // right stars
        for(int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // lower half
    for(int i = 1; i < n; i++) {
        // left stars
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        // middle spaces
        for(int j = 0; j < i; j++) {
            cout << "    ";
        }
        // right stars
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
