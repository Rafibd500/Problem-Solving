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
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n; cin>>n;
    vector<int> v1(n), v2(n), ans;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v1[i] = a;
        v2[i] = a;
    }
    sort(v2.begin(), v2.end());
    if(v1 == v2){
        pN;
        return;
    }
    for(int i=0; i<n; i++){
        if(v1[i] != v2[i]) ans.pb(v1[i]);
    }
    pY;
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    el;

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