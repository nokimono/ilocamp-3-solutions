#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int ok[100009];
int n, temp;

int sieve()
{
    for (int i = 1; i <= 100005; i++)
    {
        int flag = 0;
        for (int j = i; j <= 100005; j += i)
        {
            if (ok[j] == 1)
            {
                flag = 1;
                break;
            }
        }

        if (!flag) return i;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        ok[temp] = 1;
    }

    cout << sieve() << "\n";
}