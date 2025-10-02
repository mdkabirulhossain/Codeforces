#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, r;
    cin >> s;
    r = s;
    int size = s.size();
    int i =0, j = size - 1;
    while (size)
    {
        r[i] = s[j];
        i++;
        j--;
        size --;
        
    }
    
    if(s == r){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}