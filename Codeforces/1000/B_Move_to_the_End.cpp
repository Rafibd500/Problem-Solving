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
    vector<int> v(n), preSum(n), preMax(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    preSum[0] = v[0];
    for(int i=1; i<n; i++){
        preSum[i] = preSum[i-1]+v[i];
    }
    preMax[0] = v[0];
    for(int i=1; i<n; i++){
        preMax[i] = max(preMax[i-1], v[i]);
    }
    cout<<preMax[n-1]<<" ";
    // for(int i=n-2; i>=0; i--){
    //     cout<<preSum[i]-preSum[i+1]+preMax[i]<<" ";
    // }
    int r = n-1, l = n-2;
    while(l!=-1){
        cout<<preSum[r]-preSum[l]+preMax[l]<<" ";
        l--;
    }

    // for(int i=0; i<n; i++){
    //     cout<<preMax[i]<<" ";   
    // }
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