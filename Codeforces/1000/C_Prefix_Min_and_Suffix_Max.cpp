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
    vector<int> v(n), prefix(n+1, 0), suffix(n+1, 0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(n == 2){
        cout<<"11"<<endl;
        return;
    }
    prefix[0] = v[0];
    suffix[n-1] = v[n-1];
    for(int i=1, j = n-2; i<n; i++, j--){
        prefix[i] = min(prefix[i-1], v[i]);
        suffix[j] = max(suffix[j+1], v[j]);
    }
    // for(int i=0; i<n; i++){
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<suffix[i]<<" ";
    // }
    // cout<<endl;
    cout<<1;
    for(int i=1; i<n; i++){
        if(prefix[i-1]<v[i] && suffix[i+1]>v[i]) cout<<0;
        else cout<<1;
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