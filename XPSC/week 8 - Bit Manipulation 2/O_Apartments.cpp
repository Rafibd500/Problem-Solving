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
    int n, m, k; cin>>n>>m>>k;
    vector<int> v(n), v2(m);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<m; i++) cin>>v2[i];
    sort(all(v));
    sort(all(v2));
    int l = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        while(l<m){
            if(v2[l]>=v[i]-k && v2[l]<=v[i]+k){
                cnt++;
                l++;
                break;
            }
            else if(v2[l]<v[i]-k){
                l++;
            }
            else{
                break;
            }
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