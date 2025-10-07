#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 1 + i; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}