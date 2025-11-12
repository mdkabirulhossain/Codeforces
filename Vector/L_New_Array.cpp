#include <bits/stdc++.h>
using namespace std;

vector<int> concatenate_fun(vector<int> a, vector<int> b)
{
    vector<int> c(b);
    c.insert(c.end(), a.begin(), a.end());

    return c;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> res = concatenate_fun(a, b);

    for(int val:res){
        cout << val << " ";
    }

    return 0;
}