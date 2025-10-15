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
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(v[i-1] == v[i]) cnt++;
        else{
            if(cnt%2) {
                YES;
                return;
            }
            // else if(cnt%2 == 0 && i==n-1){
            //     YES;
            //     return;
            // }
            else cnt=1;
        }
    }
    if(cnt%2 == 1) YES;
    else NO;
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