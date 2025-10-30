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
    vector<int> v(n);
    vector<int> freq(n+1, 0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        freq[v[i]] = 1;
    }
    int l = -1, r = -1, cnt = 0;
    for(int i=0; i<n; i++){
        if(v[i] == 0) cnt++;
    }
    for(int i=0; i<n; i++){
        if(v[i] != i+1) {
            l = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(v[i] != i+1) {
            r = i;
            break;
        }
    }
    if(cnt > 1) {
        // if(is_sorted(all(v))) cout<<0<<endl;
        cout<<r-l+1<<endl;
    }
    else{
        int x;
        for(int i=0; i<=n; i++){
            if(freq[i] == 0) x = i;
        }
        for(int i=0; i<n; i++){
            if(v[i] == 0) v[i] = x;
        }

        // for(int i=0; i<n; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0; i<n; i++){
        if(v[i] != i+1) {
            l = i;
            break;
        }
        }
        for(int i=n-1; i>=0; i--){
            if(v[i] != i+1) {
                r = i;
                break;
            }
        }
        if(is_sorted(all(v))) cout<<0<<endl;
        else cout<<r-l+1<<endl;
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