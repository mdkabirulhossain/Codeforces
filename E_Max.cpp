#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = -1, value;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (max < value)
        {
            max = value;
        }
    }

    cout << max << endl;
    return 0;
}