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
const int B = 30;

void solution()
{
    int a, b, c; cin>>a>>b>>c;
    bitset<B> bA(a), bB(b), bC(c);
    string sA = bA.to_string(), sB = bB.to_string(), sC = bC.to_string();
    int flag = 0;
    for(int i=0; i<B; i++){
        if((sA[i] == '1' && sB[i]=='1' && sC[i] !='1') || (sA[i] == '1' && sB[i] !='1' && sC[i] =='1') || (sA[i] != '1' && sB[i]=='1' && sC[i] =='1')){
            NO;
            return;
        }
        // cout<<sA[i] <<" "<<sB[i]<<" "<<sC[i]<<endl;
    }
    YES;
    
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