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
    n--;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int flag = 1;
    for(int i=1; i<n-1; i++) {
        if(v[i]%2 && v[i-1]%2 == 0 && v[i+1] == 0) {
            flag = 0;
            break;
        }
        else if(v[i]%2 == 0 && v[i-1]%2 && v[i+1]%2) {
            flag = 0;
            break;
        }
    }
    if(!flag) {
        cout<<-1<<endl;
        return;
    }
    cout<<v[0]<<" ";
    for(int i=0; i<n-1; i++){
        cout<<(v[i]|v[i+1])<<" ";
    }
    cout<<v[n-1];
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