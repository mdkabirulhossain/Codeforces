#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int* first =arr;
    int* last = arr + n-1;
    bool isPalindrome = true;
    
    while(first < last){
        if(*first != *last){
           isPalindrome = false;
            break;
        }

        first ++;
        last --;
    }

    if(isPalindrome){
        cout << "YES"  <<endl;
    }else{
        cout << "NO"<<endl;
    }

    return 0;
}