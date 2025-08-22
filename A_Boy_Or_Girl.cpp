#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = s.length();

    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = 1+i; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count--;
                break;
            }
        }
    }
    
    if(count %2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}