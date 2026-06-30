#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"plz enter a number of array element: ";
    cin>> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // precompute....
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }
    int q;
    cout<<"plz enter no. of hash element : ";
    cin >> q;
    while (q--){
        int numbers;
        cout<<"plz enter number which u want to check frequency: ";
        cin >> numbers;
        // fethching....
        if (numbers >= 0 && numbers < 13){
            cout<< hash[numbers]<<endl;
        } else {
            cout<<"Invalid Input! try agiain to enter b/w 1 to 12: "<<endl;
        }
    }
    return 0;
}