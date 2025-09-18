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
    vector<int> cost(n), dis(m);
    for(int i=0; i<n; i++) cin>>cost[i];
    for(int i=0; i<m; i++) cin>>dis[i];
    sort(all(cost));
    reverse(all(cost));
    sort(all(dis));
    int l=0, r = 0, cnt = 0;
    for(int i=0; i<m; i++){
        r += dis[i];
        if(r<=n){
            for(int j=l; j<r; j++){
                if(j!=r-1) cnt+=cost[j];
            }
            l = r;
        }
    }
    for(int i=l; i<n; i++){
        cnt+=cost[i];
    }
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