#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[500009], b[500009], pre[500009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] = max(pre[i - 1], a[i]);
    }

    int cur = 1;
    for (int i = n; i >= 1; i--)
    {
        if (b[cur] <= pre[i])
        {
            continue;
        }
        else
        {
            cout << i << " ";
            cur++;
        }
    }

    while (cur <= m)
    {
        cur++;
        cout << "0 ";
    }
    cout << "\n";
}