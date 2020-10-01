#include<bits/stdc++.h>
using namespace std;
int n, a;
int main()
{
    a = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i % 2 == 1)
            {
                cout << a++ << " ";
            }
            else
            {
                cout << a-- << " ";
            }
            
        }
        if(i % 2 == 1) a += n - 1;
        else a += n + 1;
        cout << endl;
    }
}