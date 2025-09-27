#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int sum =0;
    cin>> s;
    for(int i=0; i<s.size(); i++){
        sum += s[i] - '0';
    }
    cout << sum <<endl;
    return 0;
}