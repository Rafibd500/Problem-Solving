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
    vector<int> v;
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        int t;
        if(i == 0) {
            t = a;
        }
        else{
            int person_remain = max((long long)0, a+1);
            t = i+person_remain;
        }
        ans = min(ans, t);        
    }
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