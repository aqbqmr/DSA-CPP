// // Brute Force Approach....................
// #include<bits/stdc++.h>
// using namespace std;
// vector <int> unionOfSortedArrays(int arr1[], int arr2[]){
//     int n1=arr1.size();
//     int n2 = arr2.size();
//     set<int> st;
//     for(int i=0; i<n1;i++){
//         st.insert(arr1[i]);
//     }
//     for(int i=0; i<n2;i++){
//         st.insert(arr2[i]);
//     }
//     vector<int> temp;
//     for(auto it: st){
//         temp.push_back(it);
//     }
// }
// int main(){
//     int arr1[] = {1,4,5,6,2,3,4,5};
//     int arr2[] = {1,3,5,6,7,3,2};
//     unionOfSortedArrays(arr1, arr2);
// }




// Optimal Approach............................