#include<bits/stdc++.h>
using namespace std;
void secondLargest(int arr[], int n){
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    cout<<secondLargest;
    cout<<largest;
}
int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i = 0; i < m; i++){
        cin>>arr[i];
    }
    secondLargest(arr, m);
}