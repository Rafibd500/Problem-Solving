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
    vector<int> v(n), vv(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) cin>>vv[i];
    int x = -1;
    for(int i=0; i<n; i++){
        if(vv[i]!=-1) x = v[i]+vv[i];  
    }
    
    if(x == -1){
        // if(k-*max_element(all(v))!=0) cout<<k-*max_element(all(v))+2<<endl;
        // else cout<<0<<endl;
        cout<<k-*max_element(all(v))+*min_element(all(v))+1<<endl;
        return;
    }
    for(int i=0; i<n; i++){
        if(vv[i]!=-1 && v[i]+vv[i] != x){
            cout<<0<<endl;
            return;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i]+k<x) {
            cout<<0<<endl;
            return;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i]+0>x) {
            cout<<0<<endl;
            return;
        }
    }
    
    
    cout<<1<<endl;
    
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