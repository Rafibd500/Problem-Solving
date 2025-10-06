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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int o=0, z=0, c=0;
    string s2 = "";
    for(int i=0; i<k; i++){
        if(s[i] == '1') o++;
        else if (s[i] == '2') c++;
        else if(s[i] == '0') z++;
    }
    // cout<<c<<endl;
    c*=2;
    for(int i=0; i<z; i++) s2+='-';
    if(c/2>=(n-o-z)){
        for(int i=0; i<n-o-z; i++) s2+='-';
    }
    else if(c>=n-o-z){
        for(int i=0; i<n-o-z; i++) s2+='?';
    }
    else{
        for(int i = 0; i<c/2; i++) s2+='?';
        for(int i=0; i<n-k-c/2; i++) s2+='+';
        for(int i = 0; i<c/2; i++) s2+='?';
    }

    for(int i=0; i<o; i++) s2+='-';
    cout<<s2<<endl;
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