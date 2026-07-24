#include<iostream>
using namespace std;
int main(){
    int n;
    int ld;
    int rev = 0;
    cout<<"Plz enter a number u want to reverse them: ";
    cin>>n;
    while(n>0){
        ld = n%10;
        rev = (rev * 10)+ld;
        n = n/10;
    }
    cout<<"Reverse of the digit: "<<rev<<endl;
}