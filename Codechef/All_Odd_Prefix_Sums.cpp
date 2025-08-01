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
    int n;
    cin >>n;
    vector<int> v(n), odd, even;
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i]%2) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }

    vector<int> b;
    for (int x:odd) b.push_back(x);
    for (int x:even) b.push_back(x);

    int sum = 0;
    int flag = 1;
    for (int i=0; i<n; i++) {
        sum+=b[i];
        if (sum%2==0) {
            flag=0;
            break;
        }
    }

    if (flag) {
        cout<<"Yes\n";
        return;
    }

    b.clear();
    for (int x:even) b.push_back(x);
    for (int x:odd) b.push_back(x);

    sum=0;
    flag=1;
    for (int i=0; i<n; i++) {
        sum+=b[i];
        if (sum%2==0) {
            flag = 0;
            break;
        }
    }

    if (flag) cout<< "Yes\n";
    else cout<<"No\n";
}
 
signed main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--){
        solution();
    }
}