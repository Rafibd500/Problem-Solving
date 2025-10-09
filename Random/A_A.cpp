#include <bits/stdc++.h>
using namespace std;
#define int long long
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    int a,b,k; cin>>a>>b>>k;
    int cnt = 0;
    int cnt2 = 0;
    if(a<=k && b<=k){
        cout<<1<<endl;
        return;
    }
    if(a%k) cnt+=a/k+1;
    else cnt+=a/k;
    if(b%k) cnt2+=b/k+1;
    else cnt2 += b/k;
    cout<<cnt*cnt2<<endl;
}

signed main()
{
        solution();
}