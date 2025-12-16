#include <iostream>
using namespace std;

int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int row1[] = {1, 2, 3};
    int row2[] = {4, 5, 6};
    int *matrix[2] = {row1, row2};

    cout << "Matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
