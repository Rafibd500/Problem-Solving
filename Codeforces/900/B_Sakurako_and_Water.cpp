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
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0, upp = 1, x = n-1;
    while(x>=0){
        int mx = INT_MAX;
        int j = upp;
        for(int i=0; i<x; i++){
            if(arr[i][j]<0){
                mx = min(mx, arr[i][j]);
                // cout<<i<<" "<<j<<"--";
                // cout<<arr[i][j]<<"--";
            }
            j++;
        }
        if(mx != INT_MAX) sum+=abs(mx);
        x--;
        upp++;
    }
    int mx = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j && arr[i][j]<0){
                mx = min(mx, arr[i][j]);
            }
        }   
    }
    if(mx != INT_MAX) sum+=abs(mx);

    upp = n-1, x = 1;
    while(upp>=0){
        int mx = INT_MAX;
        int i = x;
        for(int j=0; j<upp; j++){
            if(arr[i][j]<0){
                mx = min(mx, arr[i][j]);
                // cout<<i<<" "<<j<<"--";
                // cout<<arr[i][j]<<"--";
            }
            i++;
        }
        if(mx != INT_MAX) sum+=abs(mx);
        x++;
        upp--;
    }
    cout<<sum<<endl;

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