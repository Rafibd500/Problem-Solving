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
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int g1 = 0, g2 = 0;
    for(int i=0; i<n; i+=2) g1 = __gcd(g1, v[i]);
    for(int i=1; i<n; i+=2) g2 = __gcd(g2, v[i]);

    int flag = 1, ans = 0;
    for(int i=1; i<n; i+=2){
        if(v[i]%g1 == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        ans = g1;
    }
    else {
        flag = 1;
        for(int i=0; i<n; i+=2){
            if(v[i]%g2 == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            ans = g2;
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