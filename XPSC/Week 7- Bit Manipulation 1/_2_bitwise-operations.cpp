#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_off_or_on(int n, int k){
    return((n>>k)&1);
}
void print_kth_bit_off_or_on(int n, int k){
    for(int i = k-1; i>=0; i--){
        cout<< check_kth_bit_off_or_on(n, i)<<" ";
    }
    cout<<endl;
}
int turn_on_kth_bit(int n, int k){
    return n|(1<<k);
}
int turn_off_kth_bit(int n, int k){
    return n&(~(1<<k));
}
int toggle_kth_bit(int n, int k){
    return n^(1<<k);
}
int main(){
    int n, k; cin>>n>>k;
    print_kth_bit_off_or_on(n, k);
    cout<<turn_on_kth_bit(n, k)<<endl;
    cout<<turn_off_kth_bit(n, k)<<endl;
    cout<<toggle_kth_bit(n, k)<<endl;



    return 0;
}