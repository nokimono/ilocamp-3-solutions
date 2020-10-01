#include<bits/stdc++.h>
using namespace std;
int n, m, wynikd[10000], wyniki, lep, wynik;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    wynik = 1;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> wynikd[i];
    }
    for(int i = 2; i <= n; i++)
    {
        lep = 1;
        for(int j = 1; j <= m; j++)
        {
            cin >> wyniki;
            if(wyniki != 100 && wynikd[j] == 100) lep = 0;
        }
        if(lep == 1) wynik++;
    }
    cout << 1 << " " << wynik;
}