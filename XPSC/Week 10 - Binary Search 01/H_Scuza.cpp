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
    vector<int> v(n), q(k); 
    map<int, int> mp;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<k; i++) cin>>q[i];
    for(int i=0; i<k; i++) mp[q[i]] = 0;
    // sort(all(q));
    int point = 0, sum = 0, j, flag = 0;
    for(auto it:mp){
        int x = it.first;
        int y = it.second;
        for(j=point; j<n; j++){
            if(x >= v[j]) {
                if(j == n-1){
                    if(!flag) {
                        sum+=v[j];
                        flag = 1;
                    }
                }
                else sum+=v[j];
            }
            else {
                break;
            }
        }
        point = j;
        y = sum;
        mp[x] = y;
    }
    for(int i=0; i<k; i++) cout<<mp[q[i]]<<" ";
    // for(auto it:mp) cout<<it.first<<"="<<it.second<<" ";
    cout<<endl;
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