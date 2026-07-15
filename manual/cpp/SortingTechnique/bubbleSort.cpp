#include<bits/stdc++.h>
using namespace std;
void bubleSort(int arr[], int n){
    for(int i=n-1; i>0; i--){
        bool didSwap = false;
        for(int j=0; j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = true;
            }
        }
        if(!didSwap){
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bubleSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}