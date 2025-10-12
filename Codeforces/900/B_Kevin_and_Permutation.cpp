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
    int n, k; cin>>n>>k;
    vector<int> v(n);
    int cnt = 1, j = n;

    for(int i=0; i<n; i++){
        if((i+1)%k != 0){
            v[i] = j--;
        }
    }
    
    for(int i=0; i<n; i++){
        if(v[i] == 0){
            v[i] = cnt++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";   
    }
    cout<<endl;
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