#include <bits/stdc++.h>
using namespace std;
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define el cout << endl
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int n; cin>>n;
    vector<int> v;
    for(int k=60; k>=0; k--){
        if((n>>k)&1) {
            if(n-(1LL<<k)!=0){
                v.pb(n-(1LL<<k));
            }
        }
    }
    v.pb(n);
    int sz = v.size();
    cout<<sz<<endl;
    for(int i=0; i<sz; i++) cout<<v[i]<<" ";
    cout<<endl;
}

signed main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}