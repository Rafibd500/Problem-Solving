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
    int n, m; cin>>n>>m;
    vector<int> freq(m+1);
    int x = n;
    
    int a;
    while(x--){
        int sz; cin>>sz;
        while(sz--){
            int a;
            cin>>a;
            freq[a] = 1;
        }
    }
    for(int i=1; i<=m; i++){
        
        cout<<freq[i]<<" ";
        if(freq[i] == 0){
            NO;
            return;
        }
    }
    if(n>=3) YES;
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