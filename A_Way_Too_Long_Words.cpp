#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<string> str(n);

    for(int i=0; i<n; i++){
        cin >> str[i];
    }

    for(int i =0; i<n; i++){
        string s = str[i];
        if(s.length() <= 10){
            cout << s <<endl;
        }else{
            cout<<s[0]<<s.length() - 2 <<s[s.length()-1] <<endl;
        }
    }

}