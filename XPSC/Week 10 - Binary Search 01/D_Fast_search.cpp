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
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int k; cin>>k;
    sort(v.begin(), v.end());
    while(k--){
        int l, r; cin>>l>>r;
        auto it_lower = lower_bound(v.begin(), v.end(), l);
        auto it_upper = upper_bound(v.begin(), v.end(), r);
        if(it_lower == v.end()){
            cout<<0<<" ";
            continue;
        }
        cout<<it_upper - it_lower<<" ";
    }
}

signed main()
{
    fastIO();
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
    // }
}