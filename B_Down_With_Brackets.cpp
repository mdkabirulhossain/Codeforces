#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int count = 0, flag = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count == 0 && j != s.length() -1 ){
                    flag = 1;
                }
            
        }
        if(flag == 0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes" <<endl;
        }
        
    }
    return 0;
}