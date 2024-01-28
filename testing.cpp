#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (t--) {
        int n;
        cin >> n;
        int odd_count = 0, even_count = 0, odd_idx1 = -1, odd_idx2 = -1, even_idx = -1;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                even_count++;
                if (even_idx == -1) {
                    even_idx = i;
                }
            } else {
                odd_count++;
                if (odd_idx1 == -1) {
                    odd_idx1 = i;
                } else if (odd_idx2 == -1) {
                    odd_idx2 = i;
                }
            }
            if (odd_count >= 2 && even_count >= 1) {
                cout << "YES\n" << odd_idx1 << " " << odd_idx2 << " " << even_idx << "\n";
                break;
            } else if (odd_count >= 3) {
                cout << "YES\n" << odd_idx1 << " " << odd_idx2 << " " << i << "\n";
                break;
            }
        }
        if (odd_count < 3) {
            cout << "NO\n";
        }
    }
    return 0;
}
