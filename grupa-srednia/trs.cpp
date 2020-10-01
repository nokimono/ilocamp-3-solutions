#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n, k, r, ans;
int h[100009], pre[100009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];

        if (i == 1) continue;

        pre[i] = pre[i - 1];
        if (h[i - 1] < h[i]) pre[i] += h[i] - h[i - 1];
    }

    ans = 1;
    r = 1;
    for (int l = 1; l <= n; l++)
    {
        r = max(r, l);
        while (r < n)
        {
            if (pre[r + 1] - pre[l] <= k)
            {
                r++;
                ans = max(r - l + 1, ans);
            }
            else
                break;
        }
    }

    reverse(h + 1, h + n + 1);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1];
        if (h[i - 1] < h[i]) pre[i] += h[i] - h[i - 1];
    }

    r = 1;
    for (int l = 1; l <= n; l++)
    {
        r = max(r, l);
        while (r < n)
        {
            if (pre[r + 1] - pre[l] <= k)
            {
                r++;
                ans = max(r - l + 1, ans);
            }
            else
                break;
        }
    }

    cout << ans << "\n";
}