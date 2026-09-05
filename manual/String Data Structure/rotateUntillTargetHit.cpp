#include<bits/stdc++.h>
using namespace std;
bool rotateString(string s, string t){
    string current = s;
    vector<char> st;
    while(current != t){
        int n = current.size();
        for(int i = 0; i < n; i++){
            st.push_back(current[i]);
            
        }
    }
}
int main(){
    string s = "aakib";
    string t = "baaki";
    rotateString(s, t);
}