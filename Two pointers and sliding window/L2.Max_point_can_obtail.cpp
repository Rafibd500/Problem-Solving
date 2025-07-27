//maximum point you can obtain from k cards
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    int leftSum = 0, mxPoint = 0;
    for(int i =0; i<k; i++){
        leftSum += v[i];
        mxPoint = max(mxPoint, leftSum);
    }
    int rightSum = 0, rightIndex = n-1;
    for(int i = k-1; i>=0; i--){
        leftSum -= v[i];
        rightSum += v[rightIndex];
        rightIndex--;

        mxPoint = max(mxPoint, leftSum+rightSum);
    }
    cout<<mxPoint<<endl;



    return 0;
}