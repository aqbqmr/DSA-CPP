#include<bits/stdc++.h>
using namespace std;
int firstAccurance(int arr[], int n, int target){
    if(n == 0) return -1;
    if(arr[0] == target) return 0;
    int ans =  firstAccurance(arr+1, n-1, target);
    if(ans == -1) return -1;
    return ans + 1;
}
int main(){
    int n;
    cout<<"Plz enter no. of array element: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }   
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<endl<<"plz eneter target element: ";
    cin>>target;   
    cout<<firstAccurance(arr, n, target);
}
