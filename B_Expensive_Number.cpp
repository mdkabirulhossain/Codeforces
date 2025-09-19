#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        // Find last non-zero digit
        int last_nonzero = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != '0') {
                last_nonzero = i;
                break;
            }
        }

        // Count zeros before that last non-zero
        int zeros_before = 0;
        for (int i = 0; i < last_nonzero; i++) {
            if (s[i] == '0') zeros_before++;
        }

        cout << n - (zeros_before + 1) << endl;
    }

    return 0;
}
