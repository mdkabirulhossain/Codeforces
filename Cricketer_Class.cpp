#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        int jersey_no;
        string country;
};

int main(){
    Cricketer* dhoni = new Cricketer;
    cin >> dhoni->jersey_no >> dhoni->country;

    Cricketer* kohli = new Cricketer;
    *kohli = *dhoni;

    delete dhoni;

    cout << dhoni->jersey_no <<" "<< dhoni->country << endl;

    cout <<kohli->jersey_no << " " << kohli->country<<endl;

    return 0;
}