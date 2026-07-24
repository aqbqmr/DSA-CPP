#include <iostream>
using namespace std;
int main(){
    int n;
    int rev = 0;
    cout << "plz enter a number u want to check it's palindrome or not: ";
    cin >> n;
    int dup = n;
    while (n > 0){
        int ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
    }
    if(dup == rev){
        cout<<"True";
    }else{
        cout<<"False";
    }
}