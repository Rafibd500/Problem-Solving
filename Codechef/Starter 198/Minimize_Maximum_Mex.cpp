#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 300005;
int countA[MAXN], countB[MAXN], countSame[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N), B(N);

        // Clear only needed range
        for (int i = 0; i <= N; ++i) {
            countA[i] = 0;
            countB[i] = 0;
            countSame[i] = 0;
        }

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
            countA[A[i]]++;
            countB[B[i]]++;
            if (A[i] == B[i]) {
                countSame[A[i]]++;
            }
        }

        for (int mex = 0; mex <= N; ++mex) {
            int total = countA[mex] + countB[mex];
            int same = countSame[mex];
            if (total - same < 2) {
                cout << mex << '\n';
                break;
            }
        }
    }

    return 0;
}
