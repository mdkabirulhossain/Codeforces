#include<bits/stdc++.h>
using namespace std;

void recursion(int n){
    //Base condition
    if(n == 0) return;
    recursion(n-1);
    cout << n <<endl;
}

int main(){
    int n;
    cin >> n;
    recursion(n);
    return 0;
}