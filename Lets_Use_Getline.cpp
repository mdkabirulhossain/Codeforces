#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int pos = s.find('\\');
    string res = s.substr(0, pos);
    cout << res << endl;

    return 0;
}