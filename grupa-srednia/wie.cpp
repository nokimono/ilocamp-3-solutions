#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

int n, m;
int a[500009], pre[500009], ans[500009];
pair<int, int> b[500009];

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
        cin >> b[i].fi;
        b[i].se = i;
    }

    sort(b + 1, b + m + 1);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = max(pre[i - 1], a[i]);
    }

    int cur = m;
    for (int i = n; i >= 1; i--)
    {
        while (cur >= 1 && b[cur].fi > pre[i])
        {
            ans[b[cur].se] = i;
            cur--;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
