#include <bits/stdc++.h>
using namespace std;
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.rbegin(), x.rend()
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define el cout << endl
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int n, k;
    cin>>n>>k;
    string s; cin>>s;
    string ss = s;
    sort(all(ss));
    int sz = s.size();
    if(k < 1) {
        if(ss[0] == s[sz-1]) YES;
        else NO;
    }
    else {
        set<char> st;
        for(int i=0; i<sz; i++) st.insert(s[i]);
        if(st.size() == 1) NO;
        else YES;
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