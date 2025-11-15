#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int freq[26] = {0};
    getline(cin, s);

    for(char c:s){
        if(isalpha(c)){
            freq[c - 'a']++;
        }
    }

    for(int i=0; i<26; i++){
        if(freq[i]!= 0){
            cout << char(i +'a') <<" : "<<freq[i]<<endl;
        }
    }

    return 0;
}