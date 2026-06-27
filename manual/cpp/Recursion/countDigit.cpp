#include<bits/stdc++.h>
using namespace std;
int countDig(int n){
    if(n<10) return 1;
    return 1 + countDig(n/10);
}
int main(){
    int n;
    cout<<"plz enter a number: ";
    cin>>n;
    cout<<countDig(n);
}