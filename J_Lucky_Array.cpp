#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int min = arr[0];

    for(int i=0; i<n; i++){
        if(min == arr[i]){
            count ++;
        }
    }

    if(count %2 == 0){
        cout << "Unlucky"<<endl;
    }else{
        cout << "Lucky"<< endl;
    }

    return 0;
}