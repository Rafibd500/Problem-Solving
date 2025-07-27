//  Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/


// brue force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;

//     int n = s.size(), mxLen = 0;
//     for(int i = 0; i<n; i++){
//         int hash[256] = {0};
//         for(int j = i; i<n; j++){
//             if(hash[s[j]] == 1) {
//                 break;
//             }
//             mxLen = max(mxLen, j-i+1);
//             hash[s[j]] = 1;
//         }
//     }
//     cout<<mxLen<<endl;


//     return 0;
// }

//Optimal Solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n = s.size(), mxLen = 0;
    int r = 0, l = 0;
    vector<int> hash(256, -1);
    while(r<n){

        if(hash[s[r]] != -1) {
            if(hash[s[r]] >=l){
                l = ++hash[s[r]];
            }
        }
        mxLen = max(mxLen, r-l+1);
        hash[s[r]] = r;
        r++;
    }

    cout<<mxLen<<endl;


    return 0;
}