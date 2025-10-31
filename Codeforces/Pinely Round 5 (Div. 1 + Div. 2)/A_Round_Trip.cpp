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
    int r, x, d, n; cin>>r>>x>>d>>n;
    string s; cin>>s;
    int ans = 0;
    for(char ch:s){
        if(ch == '1'){
            r-=d;
            r = max(r, (int)0);
            ans++;
        }
        else{
            if(r<x) {
                r-=d;
                r = max(r, (int)0);
                ans++;
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