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
    int o=0;
    for(int i=0; i<n; i++){
        if(s[i] == '1') o++;
        else o = 0;
        if(o>=k) {
            NO;
            return;
        }
    }
    YES;
    int cnt = n;
    vector<int> p(n); 
    for(int i=0; i<n; i++){
        
        if(s[i] == '0') p[i] = cnt--;
    }
    for(int i=0; i<n; i++){
        
        if(s[i] == '1') p[i] = cnt--;
    }
    for(auto val : p){
        cout<<val<<" ";
    }
    cout<<endl;

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