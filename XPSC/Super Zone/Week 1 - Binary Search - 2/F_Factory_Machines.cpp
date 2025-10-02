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
    for(int i=0; i<n; i++) cin>>v[i];
    auto ok = [&](int second){
        int cnt = 0;
        for(int i=0; i<n; i++){
            cnt += second/v[i];
            if(cnt>=k){
                return true;
            }
        }
        return false;
    };
    int l = 1, r = 1e18, mid, ans;
    while(l<=r){
        mid = (l+r+1)/2;
        if(ok(mid)){
            r = mid-1;
            ans = mid;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<endl;

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