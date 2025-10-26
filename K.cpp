#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        maximum = a;
    } else if (b >= a && b >= c) {
        maximum = b;
    } else {
        maximum = c;
    }

    if (a <= b && a <= c) {
        minimum = a;
    } else if (b <= a && b <= c) {
        minimum = b;
    } else {
        minimum = c;
    }

    cout << minimum << " " << maximum;
    return 0;
}
