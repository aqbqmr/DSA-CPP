// when a function call itself utill a specified condition is met..............

#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void print(){
    if(cnt == 4) return;
    cout<< cnt <<endl;
    cnt++;
    print();
}
using namespace std;
int main(){
    print();
    return 0;
}