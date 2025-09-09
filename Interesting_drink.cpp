#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int x)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n ;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cin >> x;
    vector<int> day(x);
    for (int i = 0; i < day.size(); i++)
    {
        cin >> day[i];
    }

    for (int i = 0; i < day.size(); i++)
    {
        int res = binarySearch(arr, day[i]);
        if (res != -1)
        {
            cout << res + 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}