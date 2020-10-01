#include <bits/stdc++.h>
using namespace std;
int n, a, b, wynik;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> a >> b >> n;
    while(a <= n || b <= n)
    {
        if(a < b)
        {
            wynik++;
            a += a;
        }
        if(b < a)
        {
            wynik++;
            b += b;
        }
    }
    cout << wynik + 1;
}