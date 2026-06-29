#include<bits/stdc++.h>
using namespace std;
void binaryString(int i, int n, string &s){
    if(i == n){
        cout<<s<<endl;
        return;
    }
    s.push_back('0');
    binaryString(i+1, n, s);
    s.pop_back();

    s.push_back('1');
    binaryString(i+1, n, s);
    s.pop_back();
}
int main(){
    int n;
    cin>>n;
    string s = "";
    binaryString(0, n, s);
}