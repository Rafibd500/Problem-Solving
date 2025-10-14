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
    string s; cin>>s;
    int x=0, y=0;
    int o = 100;
    while(o--){
        for(int i=0; i<n; i++){
        if(s[i] == 'N') y++;
        else if(s[i] == 'E') x++;
        else if(s[i] == 'W') x--;
        else if(s[i] == 'S') y--;
        if(x == a && y == b){
            YES;
            return;
        }
        }
    }
NO;
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