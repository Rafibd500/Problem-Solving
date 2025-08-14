#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pY cout << "YES" << endl
#define pN cout << "NO" << endl
#define py cout << "Yes" << endl
#define pn cout << "No" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n, s; cin>>n>>s;
    int cnt=0, cur=s, mx = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    if(s>v[n-1]){
        cnt+=abs(s-v[0]);
    }
    else if(s<v[0]){
        cnt+=abs(v[n-1]-s);
    }
    else if(s-v[0] > v[n-1]-s){
        cnt+=abs(v[n-1]-s);
        cnt+=abs(v[n-1]-s);
        cnt+=abs(s-v[0]);
    }
    else{
        cnt+=abs(s-v[0]);
        cnt+=abs(s-v[0]);
        cnt+=abs(v[n-1]-s);
        
    }
    cout<<cnt<<endl;

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