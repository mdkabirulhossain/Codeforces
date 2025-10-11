#include <bits/stdc++.h>
using namespace std;

int countVowels(string s, int i = 0) {
    if (i == s.size()) return 0;

    char ch = s[i];
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    return isVowel + countVowels(s, i + 1);
}

int main() {
    string s;
    getline(cin, s);

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << countVowels(s) << endl;
    return 0;
}
