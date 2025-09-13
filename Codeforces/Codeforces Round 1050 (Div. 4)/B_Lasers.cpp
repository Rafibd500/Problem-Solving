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
    int n, m, x, y; cin>>n>>m>>x>>y;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<m; i++) cin>>v2[i];
    cout<<n+m<<endl;
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