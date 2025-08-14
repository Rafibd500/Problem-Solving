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
    int n, j, k; cin>>n>>j>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int target = v[j-1];
    auto mn_el = min_element(all(v));
    sort(all(v));
    if(k == 1 && target == v[0] && v[0]!=v[1]){
        pN;
    }
    else if(k==1 && target==v[n-1]) {
        pY;
    }
    else if(k == 1 && target < v[n-1]){
        pN;
    }
    else {
        pY;
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