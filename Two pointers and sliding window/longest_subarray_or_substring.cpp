//longest subarray or substring
// brute force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin>>n>>k;
//     vector<int> v(n);
//     for(int i = 0; i<n; i++) cin>>v[i];

//     int mxElement = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += v[j];
//             if(sum<=k) mxElement = max(mxElement, j-i+1);
//             else break;
//         }
//     }
//     cout<<mxElement<<endl;

//     return 0;
// } 



// better solution O(N+N) = O(N)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin>>n>>k;
//     vector<int> v(n);
//     for(int i = 0; i<n; i++) cin>>v[i];

//     int l = 0, r = 0, mxLen = 0, sum=0;

//     while(r<n){
//         sum += v[r];
//         while(sum>k){
//             sum-=v[l];
//             l++;
//         }
//         if(sum<=k) {
//             mxLen = max(mxLen, r-l+1);
//         }
//         r++;
//     }
//     cout<<mxLen<<endl;

//     return 0;
// } 


//Optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];

    int l = 0, r = 0, sum = 0, mxLen = 0;
    while(r<n){
        sum += v[r];

        if(sum>k) {
            sum -= v[l];
            l++;
        }
        else{
            mxLen = max(mxLen, r-l+1);
        }
        r++;
    }

    cout<<mxLen<<endl;


    return 0;
} 