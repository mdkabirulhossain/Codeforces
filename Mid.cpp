// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, arr + n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int* sort_it(int n){
//     int* arr = new int[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     sort(arr, arr+n, greater<int>());

//     return arr;
// }

// int main(){
//     int n;
//     cin >> n;

//     int* arr = sort_it( n);

//     for(int i=0; i<n; i++){
//         cout <<arr[i] << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     while (getline(cin, s))
//     {

//         int arr[26] = {0};

//         for (int i = 0; i < s.size(); i++)
//         {
//             arr[s[i] - 'a']++;
//         }

//         for (int i = 0; i < 26; i++)
//         {
//             while (arr[i]--)
//             {
//                 cout << char('a' + i);
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//         int id;
//         string name;
//         char section;
//         int marks;

//         Student(int id, string name, char section, int marks){
//             this->id = id;
//             this->name = name;
//             this->section = section;
//             this->marks = marks;
//         }

// };

// int main(){
//     int t;
//     cin >> t;

//     while (t--){
//         int id;
//         string name;
//         char section;
//         int marks;
        
//         cin >> id >> name >> section >> marks;
//         Student s1(id, name, section, marks);
       
//         cin >> id >> name >> section >> marks;
//         Student s2(id, name, section, marks);
       
//         cin >> id >> name >> section >> marks;
//         Student s3(id, name, section, marks);
        
//         Student best = s1;

//         if(best.marks < s2.marks ||(best.marks == s2.marks && s2.id < best.id)){
//             best = s2;
//         }

//         if(best.marks < s3.marks ||(best.marks == s3.marks && s3.id < best.id)){
//             best = s3;
//         }

//         cout <<best.id <<" "<<best.name << " "<<best.section << " "<< best.marks << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum, res = 0, flag =0;
        cin >> n >> sum;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k= j+1; k<n; k++){
                    res = arr[i] + arr[j] + arr[k];
                    if(res == sum){
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag == 1){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
    

    return 0;
}