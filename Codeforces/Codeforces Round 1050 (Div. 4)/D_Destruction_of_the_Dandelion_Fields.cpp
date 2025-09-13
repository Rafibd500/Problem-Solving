#include <bits/stdc++.h>
using namespace std;
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.rbegin(), x.rend()
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define el cout << endl
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int n; cin>>n;
    int cnt = 0, oddfound = 0;
    vector<int> v;
    while(n--){
        int a; cin>>a;
        if(a%2) {
            oddfound = 1;
            v.push_back(a);
        }
        else{
            cnt+=a;
        }
    }
    
    if(!oddfound) {
        cout<<0<<endl;
        return;
    }
    sort(all(v));
    int sz = v.size();
    if(sz%2) sz++;
    for(int i=0; i<sz/2; i++){
        cnt+=v[i];
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