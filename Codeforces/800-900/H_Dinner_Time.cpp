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
    int n, m, p, q; cin>>n>>m>>p>>q;
    if(n%p == 0){
        if(n/p * q == m) YES;
        else NO;
    }
    else YES;
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