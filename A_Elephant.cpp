#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , res=0;
    cin >> n;
    if(n <= 5){
        cout << 1 <<endl;
    }else{
        if( n % 5 == 0){
           res = n /5 ;
        }else{
            res = n/5 + 1;
        }
        cout << res <<endl;
    }

    return 0;
}