#include <bits/stdc++.h>
using namespace std;
/*-------------------------End of Macros-------------------------*/

const int mod = 1e9+7;
void solution()
{
    string s; cin>>s;
    set<int> st;
    for(int i=0; i<s.size(); i++){
        st.insert(s[i]);
    }
    if(!(st.size()%2)) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}

signed main()
{
        solution();
}