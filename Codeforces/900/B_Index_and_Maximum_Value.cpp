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
    int n, m; cin>>n>>m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    auto it = max_element(all(v));
    int mx = *it;
    while(m--){
        char sign; cin>>sign;
        int l,r; cin>>l>>r;
        if(mx>=l && mx<=r){
            if(sign == '-') mx--;
            else if (sign == '+') mx++;
        }
        cout<<mx<<" ";
    }
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