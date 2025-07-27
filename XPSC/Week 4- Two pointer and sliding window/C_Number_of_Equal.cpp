// #include <bits/stdc++.h>
// using namespace std;

// #define fastIO()                      \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define endl '\n'
// #define int long long
// #define pb push_back
// #define py cout << "YES" << endl
// #define pn cout << "NO" << endl
// #define el cout << endl
// #define txtIO()                       \
//     freopen("input.txt", "r", stdin); \
//     freopen("output.txt", "w", stdout);
// /*-------------------------End of Macros-------------------------*/

// void solution()
// {
//     int n, m;
//     cin >> n >> m;
//     map<int, int> mp;
//     for(int i=0; i<n; i++){
//         int a;
//         cin>>a;
//         mp[a]++;
//     }
//     int cnt=0;
//     for(int i=0;i<m; i++){
//         int a; cin>>a;
//         cnt+=mp[a];
//     }

//     cout<<cnt<<endl;
    
// }

// signed main()
// {
//     fastIO();
//     int t;
//     // cin >> t;
//     // while (t--)
//     solution();
// }



// two pointer approach
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
    int n, m;
    cin >> n >> m;
    vector<int>v1(n), v2(m);
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<m; i++) cin>>v2[i];
    int l=0, r=0, cnt1=0, cnt2=0, cnt=0;
    while(r<n){
        cur=v1[l];
        while(v1[l]==cur){
            if (v1[l] == cur)
            {
                cnt1++;
                l++;
            }
        }

        while (v2[r] == cur)
        {
            if (v2[r] == cur)
            {
                cnt2++;
                r++;
            }
        }
        cnt += cnt1*cnt2;
    }

    cout<<cnt<<endl;


}

signed main()
{
    fastIO();
    int t;
    // cin >> t;
    // while (t--)
    solution();
}