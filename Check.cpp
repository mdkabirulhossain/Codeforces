#include <bits/stdc++.h>
using namespace std;


bool is_Palindrome(string n, int l, int i){
    if(i >= l) return true;

    if(n[l] != n[i]){
        return false;
    }
    return is_Palindrome(n, l-1, i+1);
}
int main(){
    string n;
    cin >> n;
    int i=0, l=n.size()-1;

    
   cout << is_Palindrome(n, l, i);
}