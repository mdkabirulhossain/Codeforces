#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int used = 0;
    int level = 0;

    for (int i = 1; ; i++) {
        int need = i * (i + 1) / 2; 
        if (used + need > n) break; 
        used += need;
        level++;
    }

    cout << level << endl;
    return 0;
}
