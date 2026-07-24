#include<iostream>
#include<vector>
using namespace std;
void explianVector(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(7);
    vector<pair<int, int>> vt;
    vt.push_back({1,2});
    vt.emplace_back(1,5);

    cout<< v[0] <<" "<<v[1] <<endl;
    cout<< vt[0].first <<" "<<vt[0].second <<endl;
    cout<< vt[1].first <<" "<<vt[1].second <<endl;

    vector<int> v1 (5,100);
    for(auto it:v1){
        cout << it <<" "; 
    }
    vector<int> v2 (5);
    for(auto it:v2){
        cout << it <<" "; 
    }
    vector<int> v3 (5,20);
    for(auto it:v3){
        cout << it <<" "; 
    }
    vector<int> v4 (v3);
    for(auto it:v4){
        cout << it <<" "<<endl; 
    }

    vector<int>::iterator it = v1.begin();
    it++;
    cout<<*(it)<<" ";
    
    vector<int>::iterator it2 = v1.end();
    it2--;
    cout<<*(it)<<" ";

    // vector<int>::iterator it = v.end();
    vector<int>::reverse_iterator rit = v.rbegin();
    rit++;
    cout<<*(rit)<<" "; 
    // vector<int>::iterator it = v.rend();

    cout<<v[0]<<v.at(0)<<" ";
    cout<<v[0]<<v.back()<<" ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    v1.erase(v1.begin()+1);
    v1.erase(v1.begin()+2, v1.begin()+4);

    // Insertion function.............
    vector<int>v5(2,100);
    v5.insert(v5.begin(),300);
    v5.insert(v5.begin()+1,2,100);

    for(auto it:v5){
        cout<<it<<" ";
    }

    vector<int> copy(2,10);
    v.insert(v.begin(), copy.begin(), copy.end());
    for(auto it:copy){
        cout<<it<<" ";
    }
    cout<<v.size();

    v.pop_back();
    v.swap(v2);

    v.clear();
    cout<<v.empty();
}
int main(){
    explianVector();
    return 0;
}