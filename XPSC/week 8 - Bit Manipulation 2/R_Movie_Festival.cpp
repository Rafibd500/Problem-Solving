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
bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p2.second>p1.second;
} 
void solution()
{
    int n; cin>>n;
    vector<pair<int, int>> vp;
    for(int i=0; i<n; i++){
        int a, b;cin>>a>>b;
        vp.pb({a,b});
    } 
    sort(all(vp), cmp);
    int cnt = 1;
    int r = vp[0].second;
    for(int i=1; i<n; i++){
        
        // cout<<vp[i].first<<" "<<vp[i].second<<endl;
        if(vp[i].first >= r){
            cnt++;
            r = vp[i].second;
            // mx = INT_MIN;
        }
        else{
            
        }
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