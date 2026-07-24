#include<iostream>
#include<list>
using namespace std;

void explainList(){
    list<int>ls;
    ls.push_back(7);
    ls.emplace_back(5);

    ls.emplace_front();
    ls.push_front(6);

    for(auto lst:ls){
        cout<<lst<<" ";
    }
}
int main(){
    explainList();
}