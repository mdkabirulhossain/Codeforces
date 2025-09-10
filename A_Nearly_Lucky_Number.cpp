#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;  
    cin >>n;

    int luckyCount = 0;

    while(n){
        int left = n % 10;
        if(left == 4 || left == 7){
            luckyCount++;
        }
        n = n / 10;
    }

    cout <<luckyCount <<endl;
   
    if(luckyCount == 4 || luckyCount == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
