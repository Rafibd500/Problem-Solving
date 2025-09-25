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
    int z = 0, mo = 0, o = 0;
    while(n--){
        int x; cin>>x;
        if(x == 0) z++;
        else if(x == -1) mo++;
        else o++;
    }
    if(mo%2) cout<<z+(mo%2)+1<<endl;
    else cout<<z+(mo%2)<<endl;
    
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