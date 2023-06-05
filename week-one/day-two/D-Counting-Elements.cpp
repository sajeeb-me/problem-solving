#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int target = a[i] + 1;
        auto it = lower_bound(a.begin(), a.end(), target);
        if (it != a.end() && *it == target)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}