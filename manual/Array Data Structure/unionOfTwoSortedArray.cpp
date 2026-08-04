// Brute Force Approach....................
#include<bits/stdc++.h>
using namespace std;
vector <int> unionOfSortedArrays(int arr1[], int n1, int arr2[], int n2){
    set<int> st;
    for(int i=0; i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0; i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    int arr1[] = {1,4,5,6,2,3,4,5};
    int arr2[] = {1,3,5,6,7,3,2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> result = unionOfSortedArrays(arr1, n1, arr2, n2);
    for(auto it : result){
        cout<<it<<" ";
    }
}


// Optimal Approach............................