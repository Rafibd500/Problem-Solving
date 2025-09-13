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
    int n, m; cin>>n>>m;
    int pos = 0, cnt=0, cur=0;
    vector<pair<int, int>>vp;
    while(n--){
        int a, b; cin>>a>>b;
        if(!(a%2)){
            if(b == pos && !(cur%2)){
                cnt+=a-cur;
                cur = a;
            }
            else if(b == pos && (cur%2)){
                cnt+=a-cur-1;
                cur = a;

            }
            else if(b!=pos && !(cur%2)){
                cnt+=a-cur-1;
                cur = a;
                pos = (pos+1)%2;
            }
            else if(b!=pos && (cur%2)){
                cnt+=a-cur;
                cur = a;
                pos = (pos+1)%2;
            }
        }
        else{
            if(b == pos && !(cur%2)){
                cnt+=a-cur-1;
                cur = a;
            }
            else if(b == pos && (cur%2)){
                cnt+=a-cur;
                cur = a;

            }
            else if(b!=pos && !(cur%2)){
                cnt+=a-cur;
                cur = a;
                pos = (pos+1)%2;
            }
            else if(b!=pos && (cur%2)){
                cnt+=a-cur-1;
                cur = a;
                pos = (pos+1)%2;
            }
        }
    }
    cnt+=m-cur;
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