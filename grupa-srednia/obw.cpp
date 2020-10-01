#include <bits/stdc++.h>

using namespace std;

int n, d, b;
int power[500009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> d >> b;

        power[i] = d - b;
    }

    sort(power + 1, power + n + 1);

    long long total = 0;
    for (int i = n; i >= 1; i--)
    {
        total += (long long)power[i];

        if (total < 0)
        {
            cout << n - i << "\n";
            return 0;
        }
    }

    cout << n << "\n";
}
