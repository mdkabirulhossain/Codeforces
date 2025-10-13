#include<bits/stdc++.h>
using namespace std;

int Max_Number(int arr[], int n){
    if(n == 1) return arr[0];

    int temp = Max_Number(arr, n-1);

    if(temp < arr[n-1]){
        return arr[n-1];
    }else{
        return temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << Max_Number(arr, n);
    return 0;
}