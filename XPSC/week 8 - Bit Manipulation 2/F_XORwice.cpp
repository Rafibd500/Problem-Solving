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
    int a, b;
    cin>>a>>b;
    int cnt = 0;
    for(int k=31; k>=0; k--){
        if((a>>k)&1 && (b>>k)&1){

        }
        else if((a>>k)&1 || (b>>k)&1){
            cnt+=(1LL<<k);
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