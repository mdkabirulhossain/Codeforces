#include<bits/stdc++.h>
using namespace std;

int mx(int arr[], int n){
    if(n == 1) return arr[0];

    int max = mx(arr, n-1);

    if(max > arr[n-1]){
        return max;
    }else{
        return arr[n-1];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << mx(arr, n)<<endl;

}