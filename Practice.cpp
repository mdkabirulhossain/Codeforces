// 1. Reverse problem

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, rev=0, left = 0;
//     cin >>n;

//     while (n > 0){
//         left = n % 10;
//         rev = rev * 10 + left;
//         n /=10;
//     }

//     cout << rev;
//     return 0;
// }

// 2. GCD and LCM
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num1, num2, small, res, GCD =1;
    cin >> num1 >> num2;
    small = num1 < num2 ? num1 : num2;

    for(int i= 1; i<= small; i++){
        if(num1 % i == 0 && num2 % i == 0){
            GCD = i;
        }
    }

    int LCM = (num1 * num2) / GCD ;

    cout <<"GCD: " << GCD <<endl;
    cout <<"LCM: " << LCM <<endl;

    return 0;
}
