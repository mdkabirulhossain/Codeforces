#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    string s;
    cin >> n;

    while (n)
    {
        cin >> s;

        if(s == "Icosahedron"){
            sum = sum + 20;
        }else if(s == "Dodecahedron"){
            sum = sum + 12;
        }
        else if(s == "Octahedron"){
            sum = sum + 8;
        }
        else if(s == "Cube"){
            sum = sum + 6;
        }
        else if(s == "Tetrahedron"){
            sum = sum + 4;
        }

        n--;
    }
    
    cout << sum << endl;

    return 0;
}