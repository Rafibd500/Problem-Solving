///Max Consecutive Ones III
// https://leetcode.com/problems/max-consecutive-ones-iii/description/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int k;
    cin>>s>>k;
    int n = s.size();
    int mx = 0;
    for(int i = 0; i<n; i++){
        int z_cnt = 0;
        for(int j = i; j<n; j++){
            if(s[j] == '0') z_cnt++;
            if(z_cnt<k) {
                mx = max(mx, j-i+1);
                
            }
            else{
                break;
            }
        }
    }

    cout<<mx<<endl;



    return 0;
}