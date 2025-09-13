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
    string s; cin>>s;
    int n = s.size();
    map<char, int> mp;
    for(char ch:s){
        mp[ch]++;
    }
    // for(auto it:mp) cout<<it.second<<" ";
    int odd = 0;
    char oddCh;
    for(auto it:mp) {
        if((it.second)%2 == 1){
            odd++;
            oddCh = it.first;
        }
        if(odd > 1) {
            cout<<"NO SOLUTION";
            return;
        }
    }
    string ans = "";
    string ans2 = "";
    for(auto it:mp){
        for(int i=0; i<(it.second)/2; i++){
            ans+=it.first;
        }
    }
    if(odd == 1) ans+=oddCh;
    for(auto it:mp){
        for(int i=0; i<(it.second)/2; i++){
            ans2+=it.first;
        }
    }
    reverse(ans2.begin(), ans2.end());
    ans += ans2;
    cout<<ans<<endl;

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