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
bool isPrime(int n){
    if(n == 2) return true;
    for(int i=2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}
const int mod = 1e9+7;
void solution()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int cnt = 0;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            int x = v[i]+v[j];
            // cout<<x<<endl;
            if(isPrime(x)) cnt++;
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