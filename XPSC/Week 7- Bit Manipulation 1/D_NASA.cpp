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
const int maxN = 1LL << 15;
vector<int> palindrome;
bool isPalindrome(int n){
    string s = to_string(n), t;
    t = s;
    reverse(all(t));
    return s == t;
}
void storePalindrome(){
    for(int i=0; i<maxN; i++){
        if(isPalindrome(i)) palindrome.pb(i);
    }
}
void solution()
{
    int n; cin>>n;
    vector<int> v(n);
    vector<int> freq(maxN+1);
    
    for(int i=0; i<n; i++) {
        cin>>v[i];
        freq[v[i]]++;
    }
    int ans = n;                            
    int palLen = palindrome.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<palLen; j++){
            ans += freq[v[i] ^ palindrome[j]];
            
        }
    }
    cout<<ans/2<<endl;
    
}

signed main()
{
    fastIO();
    int t;
    cin >> t;
    storePalindrome();
    while (t--)
    {
        solution();
    }
}