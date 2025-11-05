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
    string a, b; cin>>a>>b;
    int z = 0, odd = 0, even = 0, o=0;
    for(int i=0; i<n; i++){
        if(a[i] == '1') o++;
        if(b[i] == '0'){
            z++;
            if(i%2) odd++;
            else even++;
        } 
    }
    if(z<o) {
        NO;
        return;
    }
    for(int i=0; i<n; i++){
        if(a[i] == '1'){
                if(i%2 == 0) {
                if(odd>0) odd--;
                else {
                    NO;
                    return;
                }
            }
            else{
                if(even>0) even--;
                else {
                    NO;
                    return;
                }
            }
        }
    }
    YES;
    // cout<<odd<<" "<<even<<endl;
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