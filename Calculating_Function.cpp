#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            sum -= i+1;
        }else{
            sum += i+1;
        }
    }

    cout <<sum <<endl;

    return 0;
}