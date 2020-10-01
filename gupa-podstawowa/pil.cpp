#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int a,b;
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>a>>b;
        if(b <= a){
            cout<<0<<"\n";
            continue;
        }
        int j = 0;
        while(a < b){
            a = a<<1;
            //cout<<a<<" ";
            j++;
        }
        cout<<j<<"\n";
    }

}
