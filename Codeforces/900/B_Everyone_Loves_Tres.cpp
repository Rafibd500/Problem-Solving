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
    if(n == 1 || n == 3) {
        cout<<-1<<endl;
        return;
    }
    if(n%2 == 0){
        for(int i=0; i<n-2; i++) cout<<3;
        cout<<66<<endl;
        return;
    }
    else{
        for(int i=0; i<n-5; i++) cout<<3;
        cout<<36366<<endl;
        return;
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