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
    int a, b, x, y; cin>>a>>b>>x>>y;
    int ans =0;
    if(b<a-1 || (b==a-1 && a%2==0)) {
        cout<<-1<<endl;
    }
    else if(b==a-1){
        cout<<y<<endl;
    }
    else if(b>=a){
        while(a!=b){
            if(!(a%2)){
                ans += min(x, y);
            }
            else ans+=x;
            a++;
        }
        cout<<ans<<endl;
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