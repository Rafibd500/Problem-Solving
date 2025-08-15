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
    multiset<int> v;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        auto it = v.upper_bound(a);
        if(it != v.end()){
            v.insert(a);
            v.erase(it);
        }
        else{
            v.insert(a);
        }
    }
    int ans = v.size();
    cout<<ans<<endl;
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