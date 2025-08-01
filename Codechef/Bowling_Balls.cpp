#include <bits/stdc++.h>
using namespace std;
 
#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/
 
void solution()
{
    int n, a, b, cnt=0; cin>>n>>a>>b;
    while(n--){
        int x;
        cin>>x;
        if(x>=a && x<=b) cnt++;
    }
    cout<<cnt<<endl;
    
}
 
signed main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--){
        solution();
    }
}