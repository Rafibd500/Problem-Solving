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
    int n, m; cin>>n;
    string s; cin>>s;
    cin>>m;
    string s2, s3; cin>>s2>>s3;

    deque<char> str;
    for(int i=0; i<n; i++){
        str.push_back(s[i]);
    }
    int front = 0, back = m-1;
    for(int i=0; i<m; i++){
        if(s3[i] == 'D'){
            str.push_back(s2[i]);
        }
        else{
            str.push_front(s2[i]);
        }
    }
    for(int i=0; i<n+m; i++){
        cout<<str[i];
    }

    el;
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