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
    int x = 1;
    int p = 0;
    int ans = 0;
    while(n!=0){
        while(1){
            if(x*3>n){
                break;
            }
            x*=3;
            p++;
        }
        // cout<<n<<" "<<x<<"    ";
        int cst = pow(3, p+1)+p*pow(3, p-1);
        n=n-x;
        p=0;
        x=1;
        ans+=cst;
        // cout<<n-x<<endl;
    }
    cout<<ans<<endl;

    // cout<<n-((n/x)*x)<<endl;
    // cout<<x<<" "<<n/x<<" "<<n-((n/x)*x)<<" "<<p<<endl; 
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