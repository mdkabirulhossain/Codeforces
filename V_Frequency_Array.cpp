#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n>> m;
    int arr[n], cnt[m + 1]={0};

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cnt[arr[i]]++;
    }

    for(int j=1; j<=m; j++){
        cout << cnt[j]<<endl;
    }
    return 0;
}