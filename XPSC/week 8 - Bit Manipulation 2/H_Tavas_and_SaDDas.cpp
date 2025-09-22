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
    string s = to_string(n);
    int sz = s.size();
    vector<int> v;
    for(int j = 1; j<=sz; j++){
        for(int mask = 0; mask<(1<<j); mask++){
            string s2 = "";
            for(int k = 0; k<j; k++){
                
                if((mask>>k)&1) {
                    s2+='7';
                }
                else{
                     s2+='4';
                }
                // cout<<((mask>>k) & 1)<<" ";
                // cout<<x<<" ";

            }
            int x = 0;
            int sz1 = s2.size();
            for(int l = 0; l<sz1; l++){
                int a = s2[l] - '0';
                x = x*10+a;
            }
            v.pb(x);
            // cout<<x<<endl;
        }
    }
    sort(all(v));
    int v_sz = v.size();
    int cnt = 0;
    for(int i=0; i<v_sz; i++){
        if(v[i]<=n) cnt++;
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