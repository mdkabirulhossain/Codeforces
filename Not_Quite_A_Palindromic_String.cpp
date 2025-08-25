#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, c;
    cin >> n;
    string s;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> l;
        cin >> c;
        cin >> s;
        int  o=0, z=0;
        for(int j=0; j<l; j++){
            if(s[j] == '1'){
                o++;
            
            }else{
                z++;
            }
        } 
        int res = abs((o-z)/2);
        if(res > c){
            arr[i] = "NO";
        }else if((c- res) % 2 == 0){
            arr[i] = "YES";
        }else{
            arr[i] = "NO";
        }
    }

    for(int m=0; m<n; m++){
        cout<< arr[m] <<endl;
    }
    return 0;
}