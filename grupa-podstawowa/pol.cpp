#include<bits/stdc++.h>
using namespace std;
long long a, c, b, d;
long long e, g, f, h;
long long z, y, x;
int main()
    {

        cin >> a >> b >> c >> d >> e >> f >> g >> h;

 
        x=((max(g, c)) - (max(a, e)-min(a, e)) - min(a, e) - (max(c, g) - min(c, g)));
        y=(max(f, b) - (max(d, h) - min(d, h)) - min(d, h) - (max(b, f) - min(b, f)));
        z = x * y;
        if(x < 0 && y < 0)
        {
            cout << "0";
            return 0;
        }
        if(z < 0)
        {
            cout << "0";
            return 0;
        }
        cout << z;
    }
 