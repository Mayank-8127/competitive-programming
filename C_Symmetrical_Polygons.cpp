// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         long long n,t,c = 0;
//         cin >> n;
//         long long peri = 0;
//         map<long long,long long> m;
//         for(long long i = 0; i < n; i++){
//             cin >> t;
//             m[t]++;
//             if(m[t] % 2 == 0){
//                 peri += t + t;
//                 c += 2;
//             }
//         }
//         if(c == 0){
//             cout << 0 << '\n';
//             continue;
//         }

//         vector<long long> v;
//         for(const auto& pair: m){
//             if(pair.second %2 != 0){
//                 v.push_back(pair.first);
//             }
//         }

//         sort(v.begin(), v.end());
//         long long size = v.size();
//         long long max1 = 0, max2 = 0;
//         long long flag = 0;
//         if(size == 0){
//             continue;
//         }else{
//             for(int i = size-1; i > 0; i--){
//                 max1 = v[i];
//                 max2 = v[i-1];
//                 if(max1 < peri + max2){
//                     flag = 2;
//                     break;
//                 }
//             }
//             if(flag == 0){
//                 for(int i = size-1; i >= 0; i--){
//                     max1 = v[i];
//                     if(max1 < peri){
//                         flag = 1;
//                         max2 = 0;
//                         break;
//                     }
//                 }
//             }
//             // max1 = v[size-1];
//             // for(long long i = size-2; i >= 0; i--){
//             //     max2 = min(v[i], max1);
//             //     max1 = max(v[i], max1);
//             //     if(max1-max2 >= peri){
//             //         max1 = max2;
//             //         max2 = 0;
//             //     }else{
//             //         break;
//             //     }
//             // }
//             // if(max2 == 0 && max1 >= peri){
//             //     max1 = 0;
//             // }
//         }


//         // if(max1 != 0){
//         //     c++;
//         // }
//         // if(max2 != 0){
//         //     c++;
//         // }
//         if(c == 2 && flag == 0){
//             cout << 0 << '\n';
//         }else if(flag == 0){
//             cout << peri << '\n';
//         }else if(flag == 1){
//             cout << peri+max1<< '\n';
//         }else{
//             cout << peri+max1+max2 << '\n';
//         }
//     }
// }

// // && pair.first < peri+max1 && pair.first > max2


// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         long long n,t,c = 0;
//         cin >> n;
//         long long peri = 0;
//         map<long long,long long> m;
//         for(long long i = 0; i < n; i++){
//             cin >> t;
//             m[t]++;
//             if(m[t] % 2 == 0){
//                 peri += t + t;
//                 c += 2;
//             }
//         }
//         long long max1 = 0, max2 = 0;
//         for(const auto& pair: m){
//             if(pair.second %2 != 0 && pair.first < peri+max1 && pair.first > max2){
//                 max2 = min(max1, pair.first);
//                 max1 = max(max1, pair.first);
//             }
//         }

//         if(max1 != 0){
//             c++;
//         }
//         if(max2 != 0){
//             c++;
//         }
//         if(c > 2){
//             cout << peri+max1+max2 << '\n';
//         }else{
//             cout << 0 << '\n';
//         }
//     }
// }



#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long x;
    cin >> x;
    while(x--){
        long long n,t,c = 0;
        cin >> n;
        long long peri1 = 0;
        map<long long,long long> m;
        for(long long i = 0; i < n; i++){
            cin >> t;
            m[t]++;
            if(m[t] % 2 == 0){
                peri1 += (2*t);
                c += 2;
            }
        }

        if(c == 0){
            cout << 0 << '\n';
            continue;
        }


        vector<long long> v;
        for(const auto& pair: m){
            if(pair.second % 2 != 0){
                v.push_back(pair.first);
            }
        }
        sort(v.begin(), v.end());

        long long flag = 0;
        long long peri2 = peri1;
        long long size = v.size();
        for(int i = 0; i < size; i++){
            if(v[i] < peri2){
                t = v[i];
                flag = 1;
            }
        }
        if(flag == 1) peri2 += t;


        long long peri3 = peri1;
        long long max1 = 0, max2 = 0;
        for(int i = 0; i < size-1; i++){
            max1 = v[i];
            max2 = v[i+1];

            if(max2 - max1 < peri3){
                t = max1 + max2;
                flag = 2;
            }
        }
        if(flag == 2) peri3 += t;


        if(c == 2 && flag == 0){
            cout << 0 << '\n';
            continue;
        }

        long long peri = max(peri1, max(peri2, peri3));
        cout << peri << '\n';
    }
}