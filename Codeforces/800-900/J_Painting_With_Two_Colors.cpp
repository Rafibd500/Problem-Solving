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
    int n, a, b; cin>>n>>a>>b;
    if(b>=a){
        if((n%2 && b%2) || (!(n%2) && !(b%2))) YES;
        else NO;
    }   
    else{
        if((n%2 && a%2 && b%2) || (!(n%2) && !(a%2) && !(b%2))) YES;
        else NO;
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