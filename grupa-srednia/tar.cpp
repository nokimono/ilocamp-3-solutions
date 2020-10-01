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

int n, k, l, r, sum, ans;
int a[1000009];

//===============================================================================================
int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (!i)
            continue;
        r++;
        sum += max(a[r] - a[r - 1], 0);
        while (sum > k)
        {
            l++;
            sum -= max(a[l] - a[l - 1], 0);
        }
        ans = max(ans, r - l + 1);
    }
    l = r = sum = 0;
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (!i)
            continue;
        r++;
        sum += max(a[r] - a[r - 1], 0);
        while (sum > k)
        {
            l++;
            sum -= max(a[l] - a[l - 1], 0);
        }
        ans = max(ans, r - l + 1);
    }
    printf("%d\n", ans);
}
//===============================================================================================