#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w, cost =0, result = 0;
    cin >> k >> n >> w;

    for (int i=0; i<w; i++){
        cost += k * (i + 1);
    }

    if(n - cost < 0){
        cout << abs(n-cost) <<endl;
    }else{
        cout << 0 <<endl;
    }

    return 0;
}