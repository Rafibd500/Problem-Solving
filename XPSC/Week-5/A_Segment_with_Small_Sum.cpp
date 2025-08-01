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
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int l=0, r=0, sum=0, mx = 0;
    while (r<n)
    {
        sum+=v[r];
        if(sum<=k){
            mx = max(mx, r-l+1);
        }
        else{
            sum-=v[l];
            l++;
        }


        r++;
    }


    cout<<mx<<endl;
    

}
 
signed main()
{
    fastIO();
    int t;
    // cin >> t;
    // while (t--)
        solution();
}