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

void solution()
{
    int n,m; cin>>n>>m;
    vector<int> v1(n), v2(m);
    for(int i = 0; i<n; i++) cin>>v1[i];
    for(int i = 0; i<m; i++) cin>>v2[i];
    int j=0, i=0, cnt=0;
    while(j<m){
        while(i<n){
            if(v1[i] >= v2[j]){
                break;
            }
            else{
                i++;
                cnt++;
            }
        }
        j++;
        cout << cnt << " ";
    }

}

signed main()
{
    fastIO();
    int t;
    // cin >> t;
    // while (t--)
        solution();
}