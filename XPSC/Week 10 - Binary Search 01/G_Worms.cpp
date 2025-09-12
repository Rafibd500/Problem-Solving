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
    // sort(v.begin(), v.end());
    int m; cin>>m;
    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for(int i=1; i<n; i++) prefix_sum[i] = prefix_sum[i-1] + v[i]; 
    // for(int i=0; i<n; i++) cout<<prefix_sum[i]<<" ";
    cout<<endl;
    while(m--){
        int x; cin>>x;
        auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), x);
        // cout<<x<<" "<<*it<<endl;
        cout<<it-prefix_sum.begin()+1<<endl;
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