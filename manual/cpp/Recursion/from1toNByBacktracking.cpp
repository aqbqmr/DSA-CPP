#include<bits/stdc++.h>
using namespace std;
void bkTr(int i,int n){
    if(i<1) return;
    bkTr(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"plz enter a number: ";
    cin>>n;
    bkTr(n,n);
}