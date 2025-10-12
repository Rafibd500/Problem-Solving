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
    string s; cin>>s;
    map<int, int> mp;
    for(int i=0;i<n; i++){
        mp[s[i]]++;
    }
    char mx_ch, mn_ch;
    int mx = 0, mn = INT_MAX;
    for(auto s:mp){
        if(s.second >= mx){
            mx = s.second;
            mx_ch = s.first;
        }
        if(s.second < mn){
            mn = s.second;
            mn_ch = s.first;
        }
        
    }
    if(mx == mn && mn == 1){
        s[0] = s[n-1];
        cout<<s<<endl;
        return;
    }   
    for(int i=0; i<n; i++){
        if(s[i]==mn_ch) {
            s[i] = mx_ch;
            break;
        }
    }
    cout<<s<<endl;
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