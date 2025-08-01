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
    int n, c; cin>>n>>c;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int need=0;
    while(1){
        int curr = c+need;
        bool eq=false, less = false;
        for(int i=0; i<n; i++){
            if(v[i] == curr) eq = true;
            if(v[i]<curr) less = true;
        }
        if(!eq && less){
            cout<<need<<endl;
            break;
        }
        need++;
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