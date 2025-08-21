#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, r;
    cin >> s1;
   
    for(int i=0; i<s1.length(); i++){
        if(i % 2 == 0){
            s2.push_back(s1[i]);
        }
    }

    for(int j =0; j<s2.length(); j++){
        for(int k= j+1; k<s2.length(); k++){
            if(s2[j] > s2[k]){
                swap(s2[j], s2[k]);
            }
        }
    }
    for(int m=0; m<s2.length(); m++){
        cout << s2[m] ;
        if(s2.length() - 1 != m){
            cout << "+";
        }
    }

    return 0;
}