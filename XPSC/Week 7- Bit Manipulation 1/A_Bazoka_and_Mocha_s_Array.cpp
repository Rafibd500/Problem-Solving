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
    int n, pos = -1;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n; i++) cin>>v[i];
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            pos = i+1;
            break;
        }
    }    
    if (pos == -1) {
        py;
        return;
    }

    vector<int> v2;
    for(int i = pos; i<n; i++){
        v2.push_back(v[i]);
    }
    for(int i = 0; i<pos; i++){
        v2.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    if(v == v2) py;
    else pn;
}
 
signed main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--)
        solution();
}