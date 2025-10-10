#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, f=0, e;
    cin >> n;
    e = n;
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
       if(i%2 == 0){
         cout << a[f] << " ";
         f++;
       }else{
         cout << a[e-1] << " ";
         e--;
       }
    }

    return 0;
}