#include<bits/stdc++.h>
using namespace std;
 
#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define py cout << "Yes" << endl
#define pn cout << "No" << endl
#define el cout << endl
#define txtIO() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/
 
void solution(){
    int n, c; cin>>n>>c;
    vector<int> v(n);

    for(int i = 0; i<n; i++) cin>>v[i];
    int cnt = 0;
    sort(v.rbegin(), v.rend());
    for(int i = 0; i<n; i++){
        if(v[i]>c) cnt++;
        if(v[i]<=c){
            for(int j = i; j<n; j++){
                v[j] *= 2;
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
    while(t--)
        solution();
}