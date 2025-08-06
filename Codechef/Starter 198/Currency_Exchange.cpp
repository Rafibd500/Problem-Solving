#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nULL);                    \
    cout.tie(nULL);
#define endl '\n'
#define int long long
#define pb push_back
#define PY cout << "YES" << endl
#define Pn cout << "nO" << endl
#define py cout << "Yes" << endl
#define pn cout << "no" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/


void solution()
{
    int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int flag=0;
        int cur_g, cur_s, del;
        for (int i=0; i<=a1; i++) {
            int g = a1-i;
            int s = b1+i*5;

            for (int j=0; j<=s/5; j++) {
                cur_g = g+j;
                cur_s = s-(j*5);
                del = min(cur_g - a2, cur_s - b2);
                if ((cur_g>=a2 && cur_s>=b2) && del>=0) {
                    if ((cur_g - a2) == (cur_s - b2)) {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag) break;
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

}

signed main()
{
    // fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}