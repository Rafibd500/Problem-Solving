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
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> v2(n+1);
    int cnt = 0;
    int flag = 0;
    for(int i=0; i<n; i++){
        v2[v[i]]++;
    }
    // sort(all(v2));
    int sz = v2.size();
    // for(int i=0; i<v2.size(); i++) cout<<v2[i]<<" ";
    // cout<<endl;
    int mx = INT_MIN;
    auto mx_chk = max_element(all(v2));
    int mx_element = *mx_chk;
    for(int x = 1; x<=mx_element; x++){
        for(int i=0; i<sz; i++){
            if(v2[i] >= x) cnt+=x;
        }
        mx = max(mx, cnt);
        cnt = 0;
    }
    cout<<mx<<endl;
    
    
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
