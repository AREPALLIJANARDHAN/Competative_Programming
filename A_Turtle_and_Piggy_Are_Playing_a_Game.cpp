#include <iostream>
using namespace std;

#define int long long

int getMaxScore(int x) {
    int score = 0;
    while (x > 1) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            bool found = false;
            for (int i = 3; i * i <= x; i += 2) {
                if (x % i == 0) {
                    x /= i;
                    found = true;
                    break;
                }
            }
            if (!found) {
                x = 1; // If no factor found, x is prime
            }
        }
        score++;
    }
    return score;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int maxScore = getMaxScore(r);
        cout << maxScore << '\n';
    }
    return 0;
}
