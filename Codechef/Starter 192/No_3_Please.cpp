#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define PY cout << "YES" << endl
#define PN cout << "NO" << endl
#define py cout << "Yes" << endl
#define pn cout << "No" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n; cin>>n;
    vector<int> v(n), v2(n);
    int lastz = -1, sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
        if(sum%3 == 0) lastz = i;
        v2[i] = sum%3;
    }
    if(lastz == n-1) {
        pn;
        return;
    }
    if(lastz == -1) {
        py;
        return;
    }
    int flag = 0;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        if(i > lastz){
            if(mp[v2[i]] == 0){
                flag = 1;
                break;
            }
        }
        mp[v2[i]]++;
    }
    if(flag) py;
    else pn;



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