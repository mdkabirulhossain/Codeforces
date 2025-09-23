#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, index;
    string s;
    cin >> n >> index;
    cin >> s;

    for (int i = 1; i <= index; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s;

    return 0;
}
