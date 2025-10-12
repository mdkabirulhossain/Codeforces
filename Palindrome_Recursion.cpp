#include<bits/stdc++.h>
using namespace std;

bool fun(string s, int start, int end){
    if(start >= end) return true;
    if(s[start] != s[end]) return false;

    return fun(s, start+1, end-1);

}

int main(){
    string s;
    cin >> s;
    int start = 0, end = s.size()-1; 
    bool res = fun(s, start, end);
    
    if(res){
        cout << "YES"<<endl;
    }else{
        cout << "NO" <<endl;
    }
}
