#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, left;
    cin >> n >> k;
    while (k)
    {
        left = n%10;
        if(left == 0){
            n = n/10;
        }else{
            n = n-1;
        }
        k--;

    }
     
    cout << n << endl;

    return 0;
}
