///Max Consecutive Ones III
// https://leetcode.com/problems/max-consecutive-ones-iii/description/


//brute force solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int k;
//     cin>>s>>k;
//     int n = s.size();
//     int mx = 0;
//     for(int i = 0; i<n; i++){
//         int z_cnt = 0;
//         for(int j = i; j<n; j++){
//             if(s[j] == '0') z_cnt++;
//             if(z_cnt<k) {
//                 mx = max(mx, j-i+1);
//             }
//             else{
//                 break;
//             }
//         }
//     }

//     cout<<mx<<endl;
//     return 0;
// }




//optimal==== O(2N)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int k;
//     cin>>s>>k;
//     int n = s.size();
//     int mx = 0;
//     int l=0, r=0, mxLen=0, z_cnt=0;
//     while(r<n){
//         if(s[r] == '0') z_cnt++;
//         while (z_cnt>k)
//         {
//             if (s[l] == '0') z_cnt--;
//             l++;
//         }
//         mxLen = max(mxLen, r - l + 1);
//         r++;
//     }

//     cout<<mxLen<<endl;
//     return 0;
// }



//More Optimal==== O(N)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    int mx = 0;
    int l = 0, r = 0, mxLen = 0, z_cnt = 0;
    while(r<n){
        if(s[r] == '0') z_cnt++;
        if(z_cnt>k) {
            if(s[l] == '0') z_cnt--;
            l++;
        }
        else{
            mxLen= max(mxLen, r-l+1);
        }
        r++;
    }

    cout << mxLen << endl;
    return 0;
}