#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int total = 0;

    if (a > b)
    {
        total += a;
        a--;
    }
    if (b > a)
    {
        total += b;
        b--;
    }

    total += max(a, b);

    cout << total << "\n";

    return 0;
}