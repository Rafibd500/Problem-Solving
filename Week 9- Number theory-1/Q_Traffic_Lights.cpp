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
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int s,n; cin>>s>>n;
    multiset<int> light;
    multiset<int> distance;
    light.insert(0);
    light.insert(s);
    distance.insert(s);
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        auto upper = light.upper_bound(a);
        auto lower = upper;
        lower--;

        distance.erase(distance.find(*upper-*lower));
        distance.insert(*upper-a);
        distance.insert(a-*lower);

        light.insert(a);
        cout<<*distance.rbegin()<<" ";
    }
    cout<<endl;
}

signed main()
{
    fastIO();
    int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
    // }
}