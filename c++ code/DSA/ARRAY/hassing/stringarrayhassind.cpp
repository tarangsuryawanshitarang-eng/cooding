#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    s = "abcdefghigh";

    // ceating another array (frequency array ) that stores all he elements of array ;

    //*query are 256(total asxii values ); *
    int hass[256] = {0};
    for (int i = 0; i < 13; i++)
    {
        hass[s[i] - 'a']++;
    }
    int q;
    cout << "enter thes number of Queries : ";
    cin >> q;
    while (q > 0)
    {
        char n;
        cout << "enter the searching character : ";
        cin >> n ;

        cout << "the frequensy of " << n << " is : " << hass[n -'a'];

        q--;
    }
}