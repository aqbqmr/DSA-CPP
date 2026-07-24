// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     for(int i = 1; i <= n; i++){
//         if(n%i == 0){
//             cout<<i<<endl;
//         }
//     }
// }



#include<bits/stdc++.h>
using namespace std;
void printAllDivisor(int n){
    vector<int>ls;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            ls.push_back(i);
        if((n/i) != i){
            ls.push_back(n/i);
        }
    }
  }
  sort(ls.begin(), ls.end());
  for(auto it : ls){
    cout<<it<<" ";
  }
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    printAllDivisor(n);
    return 0;
}
