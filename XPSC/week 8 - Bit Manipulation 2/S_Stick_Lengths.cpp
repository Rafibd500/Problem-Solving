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
    sort(all(v));
    int mid = v[(n)/2];
    int cnt = 0;
    for(int i=0; i<n; i++){
        cnt+=abs(mid - v[i]);
        // cout<<v[i]<<endl;
    }
    cout<<cnt<<endl;

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