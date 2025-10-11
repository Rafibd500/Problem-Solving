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
    int n_0 = 0;
    for(char ch:s){
        if(ch != '0') n_0++;
    }
    if(n_0 == s.size()){
        cout<<s.size()-1<<endl;
        return;
    }
    int r_0 = 0, found = 0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '0' && !found) r_0++;
        else if(s[i] != '0' && !found) {
            found = 1;
            break;
        }
    }
    cout<<r_0+n_0-1<<endl;
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