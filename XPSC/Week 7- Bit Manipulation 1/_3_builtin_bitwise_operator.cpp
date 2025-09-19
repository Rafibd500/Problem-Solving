#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_off_or_on(int n, int k){
    return((n>>k)&1);
}
void print_on_and_off_bit(int n){
    for(int i = 31; i>=0; i--){
        cout<< check_kth_bit_off_or_on(n, i)<<" ";
    }
    cout<<endl;
}

int main(){
    int n; cin>>n;
    print_on_and_off_bit(n);
    cout<<__builtin_popcount(n)<<endl; // O(1) ---- count on bit
    cout<<__builtin_popcountll(n)<<endl; // O(1) ---- count on bit(for long long)
    cout<<__lg(n)<<endl; // O(1) --- return the position of MSB
    

    



    return 0;
}