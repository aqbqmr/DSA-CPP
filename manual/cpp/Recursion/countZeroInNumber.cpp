#include<bits/stdc++.h>
using namespace std;
int countZero(int n){
    if(n==0) return 0;
    if(n%10==0) return 1 + countZero(n/10);
    return countZero(n/10);
}
int main(){
    int n;
    cout<<"plz eneter a number which contains zero: ";
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    int count = 0;
    cout<<countZero(n);
}