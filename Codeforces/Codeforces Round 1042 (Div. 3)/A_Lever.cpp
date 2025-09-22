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
    int n; cin>>n;
    vector<int> v1(n), v2(n);

    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<n; i++) cin>>v2[i];
    int flag = 0, cnt=0;
    while(1){
        cnt++;

        flag = 0;
        for(int i=0; i<n; i++){
            if(v1[i]<v2[i]) {
                v1[i] += 1;
                flag = 1; 
            }
            if(v1[i]>v2[i]) {
                v1[i] -= 1;
            }
        }
        if(flag == 0) break;

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