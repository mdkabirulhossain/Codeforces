#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, flag = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            cout << i <<endl;
            flag ++;
        }
    }
    if(flag == 0){
        cout << -1 <<endl;
    }

    return 0;
}