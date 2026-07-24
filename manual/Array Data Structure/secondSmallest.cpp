#include<bits/stdc++.h>
using namespace std;
void secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }
    cout<<secondSmallest;
    cout<<smallest;
}
int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i = 0; i < m; i++){ 
        cin>>arr[i];
    }
    secondSmallest(arr, m);
}