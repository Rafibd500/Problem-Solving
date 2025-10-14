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
    int flag = 0;
    for(int i=0; i<n-2; i++){
        if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') flag = 1;
    }
    if(flag){
        cout<<2<<endl;
        return;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '.') cnt++;
    }
    cout<<cnt<<endl;
    
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