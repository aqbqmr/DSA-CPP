#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[], int n){
    if(n <= 1) return true;
    if(arr[0] > arr[1]) return false;
    return checkSorted(arr + 1, n - 1);
}
int main(){
    int n;
    cout<<"plz enter to take the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<checkSorted(arr,n);
}