#include<bits/stdc++.h>
using namespace std;
void subArray(int arr[], int n){
    for(int size = 1; size <= n; size++){
        for(int start = 0; start <= n - size; start++){
            for(int j = start; j < start + size; j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    subArray(arr, n);
}


// #include <bits/stdc++.h>
// using namespace std;
// void subArray(int arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         for(int j = i; j < n; j++) {
//             for(int k = i; k <= i; k++) {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     subArray(arr, n);
// }