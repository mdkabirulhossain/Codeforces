#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int Upper_Count = 0;
    cin >> s;

    for(int i =0; i< s.length(); i++){
        if(isupper(s[i])){
            Upper_Count++;
        }
    }

    if(Upper_Count > s.length() / 2){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s <<endl;

    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }

    return 0;
}