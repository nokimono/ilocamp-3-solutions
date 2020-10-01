#include <bits/stdc++.h>
using namespace std;
long long pc, pz, pn, zol, zie, nie, fio, cze, pom, ic, iz, in;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> pc >> pz >> pn;
    cin >> zol;
    cin >> zie;
    cin >> nie;
    cin >> fio;
    cin >> cze;
    cin >> pom;


    ic = max(0LL, fio + pom + 2 * cze - 2 *pc);
    iz = max(0LL, zie + pom + 2 * zol - 2 * pz);
    in = max(0LL, zie + fio + 2 * nie - 2 * pn);

    if(ic % 2 == 0) cout << ic / 2 << " ";
    else cout << ic / 2 << ".5" << " ";
    if(iz % 2 == 0) cout << iz / 2 << " ";
    else cout << iz / 2 << ".5" << " ";
    if(in % 2 == 0) cout << ic / 2;
    else cout << in / 2 << ".5";

}