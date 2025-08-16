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
    int a1, b1, a2, b2, a3, b3; cin>> a1>> b1>> a2>> b2>> a3>> b3;
    if(a1+a2+a3==b1 && b1==b2 && b2==b3) YES;
    else if(b1+b2+b3==a1 && a1==a2 && a2==a3)YES;
    else if(a1 == b1+b2 && a1 == a2+a3 && b2==b3) YES;
    else if(b1 == a1+a2 && b1 == b2+b3 && a2==a3) YES;
    else NO;
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