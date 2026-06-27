#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a > b) a=a%b;
        else b = b%a;
    }
    if(a==0) return b;
    else return a;
}
int main(){
    int a,b;
    cout<<"plz enter 'a' and then 'b': ";
    cin>>a>>b;
    cout<<"GCD "<<gcd(a,b);
    return 0;
}