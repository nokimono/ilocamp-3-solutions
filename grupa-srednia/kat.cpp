#include <bits/stdc++.h>

using namespace std;

int n, pocz, k;
string s;
int card[2000009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n >> k;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        card[i] = i + 1;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            pocz++;
            pocz %= n;
        }
        else
        {
            swap(card[pocz], card[(pocz + 1) % n]);
            pocz++;
            pocz %= n;
        }
    }

    cout << card[pocz] << "\n";
}