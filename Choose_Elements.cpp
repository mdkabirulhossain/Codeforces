#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    long long sum = 0;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (k == 0)
        {
            break;
        }
        if (arr[i] < 0)
        {
            break;
        }

        sum = sum + arr[i];
        k--;
    }

    cout << sum << endl;
    return 0;
}