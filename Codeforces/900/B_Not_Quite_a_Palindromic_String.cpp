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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int  c1=0, c0=0;

    for(int i=0; i<n/2; i++){
        if(s[i] == '0') c0++;
        else c1++;

        if(s[n-i-1] == '0') c0++;
        else c1++; 
    }
    int mn = min(c1, c0);
    int mx = max(c1, c0);
    
    int x = (mx-mn)/2;
    if(k<x) NO;
    else if(!((k-x)%2)) YES;
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