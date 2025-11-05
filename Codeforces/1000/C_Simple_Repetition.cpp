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
    int n; cin>>n;
    int k; cin>>k;
    // string s2 = "";
    // for(int i=0; i<k; i++){
    //     s2+=s;
    // }
    // int n = stoi(s2);
    // cout<<n<<endl;
   
    bool isPrime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0) {
            isPrime = false;
            break;
        }
    }
    if(n == 2){
        isPrime == true;
    }
    if(n == 1) {
        isPrime = false;
        if(k==2){
            YES;
            return;
        }
    }
    if((isPrime && k>1) || !isPrime) NO;
    else YES;
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