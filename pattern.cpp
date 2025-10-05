#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"Please enter the size: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n - i; j++){
            cout <<" ";
        }
        for(int k=1; k<=(i*2)-1; k++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}