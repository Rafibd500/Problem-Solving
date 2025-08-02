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
    int n, m; cin>>n>>m;
    multiset<int> st;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        st.insert(a);
    }
    for(int i=0; i<m; i++){
        int a; cin>>a;
        if(st.find(a) != st.end()){
            auto it = st.find(a);
            st.erase(it);
        }
    }

    for(auto v:st){
        cout<<v<<" ";
    }
    cout<<endl;


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