#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, A_Count = 0, D_Count = 0;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            A_Count++;
        }
        else
        {
            D_Count++;
        }
    }

    if (A_Count == D_Count)
    {
        cout << "Friendship" << endl;
    }
    else if (A_Count > D_Count)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}