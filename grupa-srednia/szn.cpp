#include <bits/stdc++.h>

using namespace std;

int n, w;
int a[1000009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= w)
        {
            ans++;
            sum = 0;
        }
    }
    int ans2 = 0;
    sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += a[i];
        if (sum >= w)
        {
            ans2++;
            sum = 0;
        }
    }

    cout << max(ans, ans2) << "\n";
}