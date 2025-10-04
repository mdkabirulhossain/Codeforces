#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    

    for(int i=0; ; i++){
        if(a[i] > b[i] || (a[i] != '\0' && b[i] == '\0')){
            cout << "A is grater then B"<<endl;
            break;
        }
        else if(b[i] > a[i] || (b[i] != '\0' && a[i] == '\0')){
            cout << "B is grater then A"<<endl;
            break;
        }else if(a[i] == '\0' && b[i] == '\0'){
            cout <<"A and B are same"<<endl;
            break;
        }
    }

    return 0;
}
