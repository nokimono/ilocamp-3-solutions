#include <bits/stdc++.h>
using namespace std;
int n;
long long a;
map <int, int> t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a > n)
        {
            cout << "NIE";
            return 0;
        }
        t[a]++;
        if(t[a] > 1)
        {
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK";
}