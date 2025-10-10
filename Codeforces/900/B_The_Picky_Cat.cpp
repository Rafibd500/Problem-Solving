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
    vector<int> v(n), v2(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        v2[i] = abs(v[i]);
    }
    auto it = max_element(all(v2));
    sort(all(v2));
    int mid = (n)/2;
    if(n<3){
        YES;
        return;
    }
    // cout<<abs(v[0])<<" "<<v2[mid]<<endl;
    if(abs(v[0])<=v2[mid]) YES;
    else NO;
    // cout<<*it<<endl;

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