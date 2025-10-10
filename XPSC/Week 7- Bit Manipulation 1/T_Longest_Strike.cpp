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
    int n, k; cin>>n>>k;
    vector<int> v(n);
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int> a;
    for(auto [x,y]:mp){
        if(y>=k) a.pb(x);
    }
    if(a.empty()) {
        cout<<-1<<endl; 
        return;
    }
    int prev = a[0], l = a[0], r = a[0], len = 1, mxLen = 0;
    int sz = a.size();
    for(int i=1; i<sz; i++){
        if(a[i] - a[i-1] > 1){
            len = 1;
            prev = a[i];
            continue;
        }
        len++;
        if(len>mxLen){
            l = prev;
            r = a[i];
            mxLen = len;
        }
    }

    cout<<l<<" "<<r<<endl;

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