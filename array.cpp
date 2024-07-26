#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 6, 7, 8, 9, 11, 13};
    int b[10] = {10, 13, 20, 30, 40, 44, 56, 66, 78, 88};
    int sum[10];

    for (int i = 0; i < 10; i++)

        //for (int j = 9; j >0; j--)
        {
            sum[i] = a[i] + b[i];
        }

    for (int ii = 0; ii < 10; ii++)
    {
        cout << sum[ii] << endl;
    }

    return 0;
}