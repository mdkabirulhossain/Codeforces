#include<bits/stdc++.h>
using namespace std;

int prime_fn(int n){
    int flag = 1;

    for(int i=2; i<=n/2; i++){
        if(n % i == 0){
            flag = 0;
        }
    }

    return flag;
}

int main(){
    int n;
    cin >> n;

    if(n%2 == 0){
        cout << n/2 << " "<< n - n/2;
    }else{
        int m = n/2;
        int p = n - m;

        int flagm = prime_fn(m);
        int flagp = prime_fn(p);

        if(prime_fn(m) == 0 && prime_fn(p) == 0 ){
            cout << m << " "<< p;
        }else{
            m--;
            p++;
            prime_fn(m);
            prime_fn(p);

        }
       
    }
    return 0;
}