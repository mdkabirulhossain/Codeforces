#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int n, int i){

    if(i == n) return;

    cout << arr[i] << endl;
    fun(arr, n, i+1);
}

int main(){
    int n; 
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    fun(arr, n, 0);
    return 0;
}

