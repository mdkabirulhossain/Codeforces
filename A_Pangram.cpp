#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int cnt[26] = {0};

    if(n < 26){
        cout << "NO" << endl;
        return 0;
    }

    for(int i=0; i<n; i++){
        char ch = tolower(s[i]);
        cnt[ch - 'a'] = 1;
    }

    bool isPangram = true;
    for(int i=0; i<26; i++){
        if(cnt[i] == 0){
            isPangram = false;
            break;
        }
    }
    
    if(isPangram){
        cout <<"YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}