#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, minIndex =0, maxIndex=0;
    cin >> n;
    int arr[n];
    

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }

        if(min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }

    arr[minIndex] = max;
    arr[maxIndex] = min;

    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }

    return 0;
}