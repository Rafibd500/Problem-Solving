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
    int p = 1, p1 = 11;
    vector<int> v;
    while(p1<=n){
        if(!(n%p1)) v.pb(n/p1);
        p *= 10;
        p1 = p*10+1;
    }
    cout<<v.size()<<endl;
    if(v.size()){
        sort(all(v));
        for(auto a:v){
            cout<<a<<" ";
        }
        cout<<endl;
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