#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){    //O(log(min(a,b)))
    return __gcd(a,b);

}
int main(){
    int a = 16, b=12;
    cout<<GCD(a,b);

    return 0;
}