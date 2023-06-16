#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = '*';
            if (i == j)
                arr[i][j] = '\\';
            arr[i][n + 1 - i] = '/';
            arr[n / 2 + 1][n / 2 + 1] = 'X';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j];
        cout << "\n";
    }

    return 0;
}