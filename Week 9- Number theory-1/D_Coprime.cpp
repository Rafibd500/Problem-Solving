#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int n; cin>>n;
    vector<int> idx(10005, -1);
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        idx[a] = i+1;
    }
    int ans = -1;
    for(int i=1; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            if(idx[i] != -1 && idx[j] != -1 && __gcd(i, j)==1){
                ans = max(ans, idx[i]+idx[j]);
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