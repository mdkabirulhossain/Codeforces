#include<bits/stdc++.h>
using namespace std;

long long log_fun(long long n){
    if(n == 1) return 0;

    return 1 + log_fun(n/2);
}

int main(){
    long long n;
    cin >> n;
    cout << log_fun(n);
    
    return 0;
}