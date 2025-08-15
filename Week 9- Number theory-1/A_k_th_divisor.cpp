#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n,k; cin>>n>>k;
    vector<int> v;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0) {
            v.pb(i);
            if(n/i!=i) v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end());

    if(v.size()<k) cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
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