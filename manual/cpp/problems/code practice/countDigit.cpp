#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Please enter a number u want to count: ";
    cin>>n;
    if(n == 0){
        count = 1;
    }else{
        n = abs(n);
    }
    while(n>0){
        n = n/10;
        count++;
    }
    cout<<count;
}