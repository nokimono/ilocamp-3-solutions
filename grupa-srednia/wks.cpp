#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n;
int dp[1000009][3], a[1000009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            dp[i][0] = 1;
        }
        if (a[i] == 1)
        {
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + 1);
        }
        if (a[i] == 2)
        {
            dp[i][2] = max(dp[i - 1][1] + 1, dp[i - 1][0] + 1);
        }

        dp[i][0] = max(dp[i - 1][0], dp[i][0]);
        dp[i][1] = max(dp[i - 1][1], dp[i][1]);
        dp[i][2] = max(dp[i - 1][2], dp[i][2]);
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << "\n";
}