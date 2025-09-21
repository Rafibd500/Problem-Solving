#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int mask = 0; mask<(1<<n); mask++){
        cout<<mask<<" -> ";
        for(int k=n-1; k>=0; k--){
            if((mask>>k)&1) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }


    return 0;
}