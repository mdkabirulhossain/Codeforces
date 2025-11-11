#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int freq[26] = {0};

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        while (freq[i])
        {
            cout << char(i + 'a') << endl;
            freq[i]--;
        }
    }

    return 0;
}