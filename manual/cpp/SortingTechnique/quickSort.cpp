#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[], int low, int high){
    int pvt = arr[low];
    int i = low;
    int j = high; 
    while(i < j){
        while((arr[i] <= pvt) && (i <= high - 1)){
            i++;
        }
        while((arr[j] > pvt) && (j >= low + 1)){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]); 
    return j;
}
void quick_sort(int arr[], int low, int high){
    if(low < high){
        int pvtIndex = pivot(arr, low, high);
        quick_sort(arr, low, pvtIndex-1);
        quick_sort(arr, pvtIndex+1, high);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    quick_sort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// int pivotIndex(int arr[], int low, int high){
//     int pivot = arr[low];
//     int i = low;
//     int j = high;
//     while(i < j){
//         while(arr[i] <= pivot && i < high){
//             i++;
//         }
//         while(arr[j] >= pivot && j > low){
//             j--;
//         }
//         if(i<j) swap(arr[i], arr[j]);
//     }
//     swap(arr[low], arr[j]);
//     return j--;
// }
// void quick_sort(int arr[], int low, int high){
//     if(low < high){
//         int pvtIdx = pivotIndex(arr, low, high);
//         quick_sort(arr, low, pvtIdx-1);
//         quick_sort(arr, pvtIdx+1, high);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     quick_sort(arr, 0, n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }