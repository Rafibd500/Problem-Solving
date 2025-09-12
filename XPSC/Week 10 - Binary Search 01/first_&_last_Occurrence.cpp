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
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    // for(int i=0; i<n; i++) cout<<v[i];
    int x; cin>>x;
    int l = 0, r = n-1, first = -1, second = -1;

    // first
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid] == x){
            first = mid;
            r = mid-1;
        }
        else if(v[mid]>x) r = mid-1;
        else l = mid+1;
    }
    l = 0, r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid] == x){
            second = mid;
            l = mid+1;
        }
        else if(x<v[mid]) r = mid-1;
        else l = mid+1;
    }
    cout<<first<<" "<<second<<endl;



}

signed main()
{
    fastIO();
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
    // }
}