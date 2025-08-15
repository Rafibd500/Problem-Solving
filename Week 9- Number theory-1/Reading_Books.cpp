#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int n; cin>>n;
    vector<int> v(n);
    int mx = -1, sum=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mx = max(mx, v[i]);
        sum+=v[i];
    }
    if(sum-mx<mx) cout<<2*mx<<endl;
    else cout<<sum<<endl;
}

signed main()
{
    fastIO();
    int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
    // }
}