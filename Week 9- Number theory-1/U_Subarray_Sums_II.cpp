#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int l=0, r=0, cnt=0, sum=0;
    while(r<n){
        sum+=v[r];
        if(sum>=k){
            while(sum>=k){
                if(sum == k) cnt++;
                
                sum-=v[l++];
            }
        }
        r++;
    }

    cout<<cnt<<endl;

    return 0;
}