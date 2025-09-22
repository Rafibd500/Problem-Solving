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
    int n, m;
    cin >> n >> m;
    multiset<int> mt;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mt.insert(-x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        auto it = mt.lower_bound(-x);
        if (it != mt.end())
        {
            cout << -(*it) << "\n";
            mt.erase(it);
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    
}

signed main()
{
    fastIO();
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
    // }
}