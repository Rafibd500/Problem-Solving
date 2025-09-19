#include<bits/stdc++.h>
using namespace std;
 
#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define el cout << endl
#define txtIO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/
 
void solution(){
    int a, b, rest = 0;
    cin>>a>>b;
    int cnt = 0;
    if(b%2) {
        cnt = b/2+1;
        rest += cnt*7+4;
    }
    else {
        cnt = b/2;
        rest += cnt*7;
    } 
    int b1 = a-rest; 
    if(b1>0) {
        if(b1%15) cnt += (b1/15)+1;
        else cnt += b1/15;
    }
    cout<<cnt<<endl;
}
 
signed main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--)
        solution();
}