#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int i = 1, ans = 0;
    while (a * i <= t)
    {
        ans = b * i;
        i++;
    }

    cout << ans << "\n";

    return 0;
}