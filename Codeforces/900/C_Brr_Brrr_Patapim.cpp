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
    int arr[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin>>arr[i][j];
        }
    }   
    vector<int> p(2*n+1, -1), freq(2*n+1, 0);
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            p[i+j] = arr[i][j];
            freq[arr[i][j]] = 1;
        }
    }
    for(int i=1; i<2*n+1; i++) {
        if(freq[i] == 0){
            cout<<i<<" ";
            break;
        } 
    }
    for(int i=2; i<2*n+1; i++){
        cout<<p[i]<<" ";
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