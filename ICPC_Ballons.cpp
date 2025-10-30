#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, res = 0;
        cin >> n;
        string s;
        cin >> s;

        int charArray[26] = {0};

        for (int i = 0; i < n; i++)
        {
            charArray[s[i] - 'A']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (charArray[i] == 1)
            {
                res += 2;
            }
            else if (charArray[i] > 1)
            {
                res += charArray[i] + 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}