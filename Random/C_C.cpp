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
    string s; 
    cin>>s;
    int h=0, e = 0, l=0, o=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'h') h++;
        else if( s[i] == 'e') e++;
        else if(s[i] == 'l') l++;
        else if(s[i] == 'o') o++;

        
    }
    if(h>=1 && e>=1 && l>=2 && o>=1) {
        YES;
    }
    else{
        NO;
        cout<<h<<e<<l<<o;
    }
}

signed main()
{
    fastIO();
    int t;
    // cin >> t;
    // while (t--)
    // {
        solution();
    // }
}