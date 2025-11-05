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
    set<int> st;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        st.insert(a);   
    }
    n = st.size();
    vector<int> v;
    int i = 0;
    for(auto val:st) {
        v.push_back(val);
        // cout<<v[i++]<<" "<<val<<" ";
    }
    int cnt = 1;
    int last = v[0];
    for(int i=1; i<n; i++){
        if(last+1<v[i]) {
            cnt++;
            last = v[i];
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