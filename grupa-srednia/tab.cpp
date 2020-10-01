#include <bits/stdc++.h>
#define pc putchar
#define gc getchar
#define gcu getchar_unlocked
#define fi first
#define se second
#define pb push_back
#define mod ((ll)1e9 + 7)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//===============================================================================================

int n, m, ans;
int nn[1000009], mm[1000009];
pair<int, int> a[1000009], b[1000009];

//===============================================================================================
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> nn[i];
        a[i + 1].fi = a[i].fi;
        if (!nn[i])
            a[i + 1].fi++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> mm[i];
        b[i + 1].fi = b[i].fi;
        if (!mm[i])
            b[i + 1].fi++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        a[i].se = a[i + 1].se;
        if (nn[i])
            a[i].se++;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        b[i].se = b[i + 1].se;
        if (mm[i])
            b[i].se++;
    }
    for (int i = 0, j = 0, temp = 0; i <= n; i++, temp++)
    {
        while (a[i].fi < temp && i <= n)
            i++;
        for (; j <= m; j++)
        {
            if (b[j].fi >= temp)
            {
                ans = max(ans, min(a[i].fi, b[j].fi) + min(a[i].se, b[j].se));
                break;
            }
        }
    }
    cout << ans;
}
//===============================================================================================