#include<bits/stdc++.h>
using namespace std;
int lastAccurance(int arr[], int n, int target){
    if(n == 0) return -1;
    if(arr[n-1] == target) return n-1;
    return lastAccurance(arr, n-1, target);
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
    cout<<lastAccurance(arr, n, target);
}