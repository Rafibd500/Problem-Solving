#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nULL);                    \
    cout.tie(nULL);
#define endl '\n'
#define int long long
#define pb push_back
#define PY cout << "YES" << endl
#define Pn cout << "nO" << endl
#define py cout << "Yes" << endl
#define pn cout << "no" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i=0; i<n;i++) cin >> v[i];
    int mn = INT_MAX, t;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) continue;
            else{
                int a=v[i];
                int b=v[j];
    
                if (i+1 ==j) b/=2;
                else if (j+1==i) a/=2;
    
                t=a+b;
                mn = min(mn, t);
            }
        }
    }

    cout << mn << endl;

}

signed main()
{
    // fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}