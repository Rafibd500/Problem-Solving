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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(v[1] == 0) {
        cout<<v[0]<<endl;
        return;
    }
    int mn1 = v[0]+v[1];
    int mn2 = v[0]+min(v[0], v[1]+v[2]);
    // int min3 = v[0]+min(v[0], v[1])+min()
    if(mn1<mn2){
        cout<<mn1<<endl;
    }
    else cout<<mn2<<endl;
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