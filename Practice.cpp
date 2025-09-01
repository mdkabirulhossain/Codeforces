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
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int num1, num2, small, res, GCD =1;
//     cin >> num1 >> num2;
//     small = num1 < num2 ? num1 : num2;

//     for(int i= 1; i<= small; i++){
//         if(num1 % i == 0 && num2 % i == 0){
//             GCD = i;
//         }
//     }

//     int LCM = (num1 * num2) / GCD ;

//     cout <<"GCD: " << GCD <<endl;
//     cout <<"LCM: " << LCM <<endl;

//     return 0;
// }


// 3 String Reverse and sort
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.length()-1; i++){
        for(int j= i + 1; j<s.length(); j++){
            if(s[i] > s[j]){
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    cout << s <<endl;
    return 0;
}