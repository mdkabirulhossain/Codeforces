#include <bits/stdc++.h>
using namespace std;

vector<int> luckyNums;

void generateLucky(int num) {
    if (num > 1000) return;
    if (num != 0) luckyNums.push_back(num);
    generateLucky(num * 10 + 4);
    generateLucky(num * 10 + 7);
}

int main() {
    int n;
    cin >> n;
    generateLucky(0);
    
    for (int x : luckyNums) {
        if (n % x == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
