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
const int B = 30;
void solution()
{
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> bits(B+1);
    for(int i=0; i<n; i++){
        for(int j=B; j>=0; j--){
            bits[j]+=((v[i]>>j) & 1);
        }
    }
    int ans = 0;
    for(int i=B; i>=0; i--){
        // cout<<i<<"=>"<<bits[i]<<endl;
        if(bits[i] == n){
            ans += (1LL << i);
        }
        else{
            int need = n-bits[i];
            if(need<=k){
                ans += (1LL<<i);
                k -= need;
            }
        }
    }
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