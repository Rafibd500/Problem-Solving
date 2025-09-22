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
    int mx = INT_MIN;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        mx = max(mx, __lg(v[i]));
    }
    int ans = 0, a=0, b=0;
    for(int i=0; i<=mx; i++){
        int one = 0, zero = 0;
        for(int j=0; j<n; j++){
            bitset<13> bset(v[j]);
            if(bset[i] == 1) {
                one = 1;
            }
            else{
                zero = 1;
            }
        }
        if(one && zero) {
            a += 1LL<<i;
        }
    }
    cout<<a-b<<endl;
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