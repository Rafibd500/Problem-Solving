#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    int mxL = *max_element(b.begin(), b.end());

    int ans = INT_MIN;
    for(int L=1; L<=mxL; L++){
        int sum=0;
        for(int i=0; i<n; i++){
            if(b[i]<=L && a[i]>0) sum+=a[i];
        }
        ans = max(sum-L, ans);
    }
    if(ans<0) ans=0;
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