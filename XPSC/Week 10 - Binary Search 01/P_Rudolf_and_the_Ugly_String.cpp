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
    int cnt = 0;
    for(int i=0; i<n-2; i++){
        if((s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') || (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')) {
            cnt++;
            i+=2;
        }
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