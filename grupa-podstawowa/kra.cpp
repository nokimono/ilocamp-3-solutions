#include<bits/stdc++.h>
using namespace std;
int wynik, n, d, a, b, maks, pole;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> d;

    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        wynik = (2 + (a - 2) / d) * (2 + (b - 2) / d);
        if(wynik > maks)
        {
            maks = wynik;
            pole = a * b;
        }
    }
    cout << pole;
    
}