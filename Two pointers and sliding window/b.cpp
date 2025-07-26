//longest subarray or substring
// brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];

    int mxElement = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += v[j];
            if(sum<=k) mxElement = max(mxElement, j-i+1);
            else break;
        }
    }
    cout<<mxElement<<endl;

    return 0;
} 
