// this is parametarized function method to add the sum of the number using recursion.......
#include<bits/stdc++.h>
using namespace std;
void rec(int n, int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    rec(n - 1, sum + n);
}
int main(){
    int n;
    cout<<"plz enter a number: ";
    cin>>n;
    int sum = 0;
    rec(n,sum);
}