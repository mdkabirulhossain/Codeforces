#include <bits/stdc++.h>
using namespace std;

long long power(int base, int exp){
    long long r = 1;
    for (int i=0; i<exp; i++){
        r *=base;
    }
    return r;
}

int main()
{
    int x, n;
    long long sum = 0;
    cin >> x >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            long long val = power(x, i);
            if (i == 0)
            {
                sum = sum + val - 1;
            }
            else
            {
                sum += val;
            }
        }
    }

    cout << sum << endl;
    return 0;
}