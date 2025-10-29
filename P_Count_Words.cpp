#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(char &c: s){
        if(!isalpha(c)){
            c = ' ';
        }
    }

    stringstream ss(s);
    string word;
    int count = 0;
    while(ss >> word){
        count ++;
    }
    cout << count <<endl;

    return 0;
}