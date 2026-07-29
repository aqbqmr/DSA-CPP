// // Brute Force Approach.......
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     set<int> st;
//     for(int i=0; i<n;i++){
//         st.insert(arr[i]);
//     }
//     int index=0;
//     for(auto it: st){
//         arr[index] = it;
//         index++;
//         cout<<it;
//     }
// }


// Optimal Approach.......Why this is not working for this
#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    removeDuplicate(arr, n); 
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}