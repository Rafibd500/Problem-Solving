#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, a, b, p, q; cin>>n>>a>>b>>p>>q;

    int x = n/a;
    int y = n/b;

    int common = n/(a/__gcd(a,b)*b);

    if(p>q) y-=common;
    else x-=common;

    cout<<x*p + y*q<<endl;


    return 0;
}