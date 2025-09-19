#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_off_or_on(int n, int k){
    return(n>>k & 1);
}
void print_off_and_on_bit(int n){
    for(int k=7; k>=0; k--){
        cout<<check_kth_bit_off_or_on(n, k)<<" ";
    }
    cout<<endl;
}
int turn_on_kth_bit(int n, int k){
    return (1<<k | n);
}
int turn_off_kth_bit(int n, int k){
    return (~(1<<k) & n);
}
int toggle_kth_bit(int n, int k){
    return (1<<k ^ n);
}
int main(){
    int n; cin>>n;
    // cout<<check_kth_bit_off_or_on(n, 3);
    print_off_and_on_bit(n);
    
    cout<<turn_on_kth_bit(n, 4)<<endl;
    cout<<turn_off_kth_bit(n, 3)<<endl;
    cout<<toggle_kth_bit(n, 0);
    
    
    return 0;
}