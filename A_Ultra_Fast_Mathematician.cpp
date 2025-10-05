#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b, res;
    cin >> a >> b;

    for(int i=0; i<a.size(); i++){
        if(a[i] == b[i]){
            res.push_back('0');
        }else{
            res.push_back('1');
        }
    }

    cout << res << endl;

    return 0;
}