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
 
int i;
bool compareBit(int x, int y) {
    int bx = (x >> i) & 1;
    int by = (y >> i) & 1;
    return (bx < by) || (bx == by && x < y);
}
void solution()
{
    int n;
    cin>>n;
    cout<<10<<endl;

    for (i=0; i<10; i++) {
        vector<int> a;
        for (int j=1; j<=n; j++) a.push_back(j);

        sort(a.begin(), a.end(), compareBit);
        for (int x:a) cout<<x<<' ';
        cout<<endl;
    }


};
 
signed main()
{
    fastIO();
    // int t;
    // cin >> t;
    // while (t--){
        solution();
    // }
}