#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (char &c : s)
    {
        if (!isalpha(c))
        {
            c = ' ';
        }
    }
    stringstream ss(s);
    string word;
    bool first = true;

    while (ss >> word)
    {

        reverse(word.begin(), word.end());
        if(!first) cout << " ";
        cout << word;
        first = false;
    }

    return 0;
}