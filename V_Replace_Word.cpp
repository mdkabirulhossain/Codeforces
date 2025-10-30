#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    s = regex_replace(s, regex("EGYPT"), " ");

    cout << s << endl;
    return 0;
}