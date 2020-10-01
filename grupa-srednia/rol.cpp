#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

ll n, mn, mx, ans;
ll a[1000009], b[1000009];

ll getInt()
{
    char c = getchar_unlocked();
    while (c != '-' && !isdigit(c)) c = getchar_unlocked();

    bool neg = (c == '-');
    ll result = neg ? 0 : c - '0';
    while (isdigit(c = getchar_unlocked())) result = (result * 10) + (c - '0');

    return neg ? -result : result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    mn = INT_MAX;
    mx = INT_MAX;
    n = getInt();
    for (int i = 0; i < n; i++)
    {
        a[i] = getInt();
        b[i] = getInt();
        mx = min(a[i], mx);
    }

    nth_element(b, b + n / 2, b + n);

    ll goal = b[n / 2];

    if (goal > mx)
    {
        for (int i = 0; i < n; i++)
        {
            ans += abs(mx - b[i]);
        }
        printf("%lld\n", ans);
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        ans += abs(goal - b[i]);
    }
    printf("%lld\n", ans);
}