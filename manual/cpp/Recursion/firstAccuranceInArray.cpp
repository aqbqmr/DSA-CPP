#include<bits/stdc++.h>
using namespace std;
int firstAccurance(int arr[], int n, int target){
    if(n <= 1) return n;
    if(target == arr[n]) return arr*;
    firstAccurance(arr+1, n-1, target);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }   
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
    int target;
    cin>>target;   
    cout<<firstAccurance(arr, n, target);
}
