#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

   int freq[26] = {0};
   char c;

   for (int i = 0; i < n; i++) {
        scanf(" %c", &c);
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            putchar('a' + i);
        }
    }

    return 0;
}
