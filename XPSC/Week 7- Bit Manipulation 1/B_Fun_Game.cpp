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
    int n; cin>>n;
    string s, t; cin>>s>>t;
    if(s == t || s[0] =='1') {
        YES;
        return;
    }
    int idx = -1;
    for(int i=0; i<n; i++){
        if(s[i] == '1') {
            idx = i;
            break;
        }
    }
    if(idx == -1) {
        NO;
        return;
    }
    for(int i=0; i<n; i++){
        if(s[i] != t[i] && i<idx){
            NO;
            return;
        }
    }
    YES;
    

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