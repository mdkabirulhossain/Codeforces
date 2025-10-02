#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    for(int i=0; i<S.size(); i++){
        if(S[i]>= 'a' && S[i]<= 'z'){
            S[i] = toupper(S[i]);
        }
        else if(S[i]>= 'A' && S[i]<= 'Z'){
            S[i] = tolower(S[i]);
        }else{
            S[i] = ' ';
        }
    }

    cout << S <<endl;

    return 0;
}