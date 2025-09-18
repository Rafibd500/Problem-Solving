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
    vector<int> v(n), v1(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int l = 0, r = n-1;
    int m = n;
    while(m--){
        for(int i=0; i<n; i++){
            if(v[i] == 0) v[i] = 0 ;
            else v[i] -= 1;
        }
        // for(int i=0; i<n; i++) cout<<v[i]<<" ";
        // cout<<endl;
        for(int i=l; i<=r; i++){
            
            // cout<<v[l]<<"---"<<v[r]<<endl;
            int ok = 0;
            if(v[l] == 0){
                ok = 1;
                l++;
                break;
            }
            else if(v[r] == 0){
                ok = 1;
                r--;
                break;
            }
            if(ok == 0){
                NO;
                return;
            }
        }
    }
    YES;
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