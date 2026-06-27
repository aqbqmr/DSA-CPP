#include<bits/stdc++.h>
using namespace std;
int sumDigit(int n){
    if(n < 10) return n;
    return (n%10) + sumDigit(n/10);
}
int main(){
    int n;
    cout<<"plz enter the number: ";
    cin>>n;
    cout<<sumDigit(n);
}



// #include<bits/stdc++.h>
// using namespace std;
// int productDigit(int n){
//     if(n < 10) return n;
//     return (n%10) * productDigit(n/10);
// }
// int main(){
//     int n;
//     cout<<"plz enter the number: ";
//     cin>>n;
//     cout<<productDigit(n);
// }