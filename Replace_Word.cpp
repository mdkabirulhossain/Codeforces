#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int pos = 0;
        while ((pos = s.find(x, pos)) != string::npos)
        {
            s.replace(pos, x.size(), "#");
            pos++;
        }
        
        cout << s << endl;

    }
    
    return 0;
}