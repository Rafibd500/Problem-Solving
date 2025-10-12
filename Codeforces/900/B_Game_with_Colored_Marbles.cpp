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
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int cnt2 = 0, cnt1 = 0;
    for(auto v:mp){
        if(v.second == 1) cnt2++;
        else cnt1++;
    }
    int ans = ((cnt2+1)/2)*2;
    ans += cnt1;
    cout<<ans<<endl;

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