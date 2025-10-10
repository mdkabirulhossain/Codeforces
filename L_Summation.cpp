#include<bits/stdc++.h>
using namespace std;

long long summation(long long arr[], int n, int i=0){
    if(i == n) return 0;
 
    return arr[i] + summation(arr, n, i+1);
}

int main(){
    int n;
    cin >> n;
    long long arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long res = summation(arr, n);
    cout << res <<endl;

    return 0;
}