#include<bits/stdc++.h>
using namespace std;

long long fun(long long n){
    if(n == 0 || n == 1) return 1;
    return n* fun(n-1);
}

int main(){
    long long n;
    cin >> n;
    long long res = fun(n);
    cout << res << endl;
}