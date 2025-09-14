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
    int n, m; cin>>n>>m;
    string s; cin>>s;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    int ncnt = 0, cnt=0;
    for(auto it:mp){
        if(it.second<m) cnt += m-it.second;
        ncnt++;
    }
    if(ncnt<7) cnt+=m*(7-ncnt);
    cout<<cnt<<endl;
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