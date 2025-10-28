#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t){
        int n;
        cin >> n;
        int arr[n];
        int res=0, minValue = INT_MAX;
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n-1; i++){
            for(int j= i+1; j<n; j++){
                res = arr[i] + arr[j] + (j-i);
                if(minValue > res){
                    minValue= res;
                }
            }
        }
        cout <<minValue << endl;
        t--;
    }
    return 0;
}