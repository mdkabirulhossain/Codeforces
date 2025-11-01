#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
            
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if (even == odd)
            {
                cout << 0 << endl;
            }
            else if (even < odd)
            {
                cout << (n / 2 - even) << endl;
            }
            else if (even > odd)
            {
                cout << (n / 2 - odd) << endl;
            }
        }
    }

    return 0;
}