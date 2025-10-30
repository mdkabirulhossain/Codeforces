#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
         int f=0, e=0;

        for(int i=0; i<s.size(); i++){
            if(i < s.size()/2){
                f +=s[i];
            }else{
                e +=s[i];
            }
        }

        if(f == e){
            cout << "Yes" <<endl;
        }else{
            cout << "No" << endl;
        }

    }
    
    return 0;
}