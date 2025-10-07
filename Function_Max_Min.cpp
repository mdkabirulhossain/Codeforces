#include <bits/stdc++.h>
using namespace std;

void Max_Min(int *arr, int n)
{
    int max = *arr, min = *arr;
   
    for (int i = 1; i < n; i++)
    {
        if (max < *(arr + i))
        {
            max = *(arr + i);
        }
        if (min > *(arr + i))
        {
            min = *(arr + i);
        }
    }
    cout << min << " " << max << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Max_Min(arr, n);

    return 0;
}