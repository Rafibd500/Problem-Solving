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
    int n ,m;
    cin>>n>>m;
    if(m>n) pn;
    else if((n-m)%2) pn;
    else py;
}
 
signed main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--)
        solution();
}