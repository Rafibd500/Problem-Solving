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

const int mod = 1e9+7;
void solution()
{
    int n; cin>>n;
    vector<int> v(n);;
    for(int i=0; i<n; i++) cin>>v[i];
    int l=0, r=0, mx = -1;
    map<int, int> mp; 
    while(r<n){
        mp[v[r]]++;
        while(mp[v[r]]>1){
            mp[v[l++]]--;
        }
        mx = max(mx, r-l+1);
        r++;
    }
    cout<<mx<<endl;
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