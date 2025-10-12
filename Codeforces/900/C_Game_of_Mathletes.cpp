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
    vector<int> v(n);
    map<int, int> freq;
    for(int i=0; i<n; i++){
        cin>>v[i];
        freq[v[i]]++;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(k-v[i]>=0 && k!=v[i]){
            int need = k-v[i];
            if(freq[v[i]]>0 && freq[need]>0 && v[i] != need){
                cnt++;
                freq[v[i]]--;
                freq[need]--;
            }
            else if(v[i] == need && freq[v[i]]>=2){
                cnt++;
                freq[v[i]]-=2;
            }
        }
    }
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