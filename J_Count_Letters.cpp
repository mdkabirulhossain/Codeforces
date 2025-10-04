#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt[26] = {0};

    for(int i=0; i<s.length(); i++){
        cnt[s[i]-97]++;
    }

    for(int i=0; i<26; i++){
        if(cnt[i] != 0){
            cout<<char(i + 97)<<" : "<<cnt[i]<<endl;
        }
        cnt[i] = 0; 
        
    }
    return 0;
}