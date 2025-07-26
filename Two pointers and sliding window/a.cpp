#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];

    int l = 0, r = k-1;
    int sum;
    for(int i = 0; i<k; i++) sum+=v[i];
    int mxSum = sum;
    while(r<n-1){
        sum -= v[l];
        l++;
        r++;
        sum += v[r];
        cout<<sum<<endl;
        mxSum = max(mxSum, sum);
    }

    cout<<mxSum<<endl;

    return 0;
}