#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int countA = 0, countB = 0;
        for (char c : S) {
            if (c == 'a') {
                ++countA;
            } else if (c == 'b') {
                ++countB;
            }
        }

        cout << countA << ' ' << countB << '\n';
    }

    return 0;
}
