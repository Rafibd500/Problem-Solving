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
    int m =k;
    vector<int> v(n);
    int sum=0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
    }

    sort(v.begin(), v.end());

    // cout<<v[0]<<" "<<v[1]<<endl;
    int mn1 = v[0];
    int mn2 = v[1];
    while (k)
    {
        int avg = (mn1+mn2+1)/2;
        if(avg<mn2){
            mn2 = avg;
            sum+=avg;
        }
        else{
            sum+=avg*k;
            break;
        }
        k--;
    }
    cout<<sum<<endl;
    



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