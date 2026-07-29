#include<bits/stdc++.h>
using namespace std;
void leftRotateTheArrayByAnyPlace(int arr[], int n, int d){
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotateTheArrayByAnyPlace(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// void leftRotateTheArrayByAnyPlace(int arr[], int n){
//     int d;
//     cin>>d;
//     vector<int> temp;
//     for(int i=0; i<d; i++){
//         temp.push_back(arr[i]);
//     }
//     for(int i=d; i<n; i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i=n-d; i<n; i++){
//         arr[i] = temp[i-(n-d)];
//     }
// } 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     leftRotateTheArrayByAnyPlace(arr, n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// }



// // Optimal Approach.....(if reverse function is not going to work{if u are using any other language})
// #include<bits/stdc++.h>
// using namespace std;
// void reverseArray(int arr[], int start, int end){
//     while(start <= end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// void leftRotateTheArrayByAnyPlace(int arr[], int n, int d){
//     reverseArray(arr, 0, n-d);
//     reverseArray(arr, n-d+1, n-1);
//     reverseArray(arr, 0, n-1);
// } 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;
//     leftRotateTheArrayByAnyPlace(arr, n, d);
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// }


// // Optimal Approach.....
// #include<bits/stdc++.h>
// using namespace std;
// void leftRotateTheArrayByAnyPlace(int arr[], int n, int d){
//     reverse(arr,arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr+n);
// } 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;
//     leftRotateTheArrayByAnyPlace(arr, n, d);
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// }