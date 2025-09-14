#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int flag = 0, flag2 = 0;
    int one = -1, jora = -1;
    for(int i=0; i<n; i++){
        if(s[i] == '1') {
            one = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] == '1' && s[i+1] == '0') {
            jora = i;
            flag2 = 1;
        }
    }
    if(one == -1) {
        for(int i=0; i<n; i++) cout<<s[i];
        cout<<endl;
        return;
    }
    for(int i=0; i<one; i++) cout<<s[i];
    if(flag2){
            cout<<"0";
            flag2 = 0;
    }
    for(int i=jora+1; i<n; i++){

        if(s[i] == '0' && flag) cout<<s[i];
        else if(s[i]=='1'){
            cout<<s[i];
            flag = 1;
        }
    }
    cout<<endl;
}
signed main(){
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}