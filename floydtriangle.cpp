#include <iostream>
using namespace std;

int main()
{
    int i, j, count = 1, n;
    cout << "Enter number of rows for floyd triangle";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count << "  ";
            count++;
        }

        cout << endl;
    }

    // INverted floyd triangle
    int count1;
    count1 = n * (n + 1) / 2;
    cout << "Inverted triangle\n";

    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << count1 << "  ";
            count1--;
        }

        cout << endl;
    }
}
