#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, y = 0;

    cin >> a >> b;

    while (a <= b)
    {
        
        if (a > b)
        {
            break;
            
        }
        else
        {
            int a1 = a*3;
            int b1 = b*2;
            a = a1;
            b = b1;
            y++;
        }
    }

    cout<< y <<endl;

    return 0;
}