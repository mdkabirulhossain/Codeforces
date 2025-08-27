#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, c, res, pos;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> c;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);

        res =0;
        reverse(arr, arr + n);
        pos = 0;
        for(int m=0; m<n; m++){
            if((arr[m] * (1 <<pos)) <= c){
                res++;
                pos++;
            }
        }
        cout << n - res <<endl;
        
    }

    return 0;
}