#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, res=0;
    cin >> n >> h;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] <= h){
            res +=1;
        }else{
            res+=2;
        }
    }

    cout<< res <<endl;

    return 0;
}