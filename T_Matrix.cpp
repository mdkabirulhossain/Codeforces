#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0 , d1=0, d2=0;
    cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        d1 += arr[i][i];
        d2 += arr[i][n-i-1];
    }

    sum = abs(d1 - d2);

    cout << sum <<endl;

    return 0;
}