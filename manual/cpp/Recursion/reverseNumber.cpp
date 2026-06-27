#include<bits/stdc++.h>
using namespace std;
int countDig(int i){
        if(i<10) return 1;
        return 1 + countDig(i/10);
    }
int reverse(int n){
    int digit = countDig(n);
    if(n<10) return n;
    return (n%10) * (int)pow(10, digit - 1) + reverse(n/10);
}
int main(){
    int n;
    cout<<"plz enter the number: ";
    cin>>n;
    cout<<reverse(n);
    // cout<<countDig(n);
}