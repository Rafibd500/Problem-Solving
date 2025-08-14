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
#define pY cout << "YES" << endl
#define pN cout << "NO" << endl
#define py cout << "Yes" << endl
#define pn cout << "No" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n; cin>>n;
    string s; cin>>s;
    map<char, int> mp;
    if(n>3){
        if(s[0] == s[n-1]){
            for(int i=0; i<n-1; i++){
                mp[s[i]]++;
            }
            for(auto v:mp){
                if(v.second>1){
                    py;
                    return;
                }
            }
            pn;
        }
        else{
            for(int i=0; i<n; i++){
                mp[s[i]]++;
            }
            for(auto v:mp){
                if(v.second>1){
                    py;
                    return;
                }
            }
            pn;
        }
    }
    else {
        if(s[0] == s[1] || s[2] == s[1]) py;
        else pn;
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