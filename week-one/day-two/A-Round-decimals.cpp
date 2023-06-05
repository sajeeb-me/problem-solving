#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int count = 0;
    int temp = a;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }

    string result;
    if (count < 4)
    {
        int remaining = 4 - count;
        while (remaining > 0)
        {
            result += "0";
            remaining--;
        }
    }
    result += to_string(a);

    cout << result << "\n";

    return 0;
}