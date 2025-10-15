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
    int x, y, k; cin>>x>>y>>k;
    if(x>=k && y>=k){
        cout<<0<<" "<<0<<" "<<0<<" "<<k<<endl;
        cout<<0<<" "<<0<<" "<<k<<" "<<0<<endl;
    }
    else {
        int o = min(x, y);
        cout<<0<<" "<<0<<" "<<o<<" "<<o<<endl;
        cout<<0<<" "<<o<<" "<<o<<" "<<0<<endl;
    }
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