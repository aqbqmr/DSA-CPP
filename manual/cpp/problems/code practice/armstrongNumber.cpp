#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"plz enter a number: ";
    cin>>num;
    int ld;
    int count = 0;
    int temp = num;
    while(temp>0){
        temp = temp/10;
        count++;
    }
    temp = num;
    int sum = 0;
    while(temp > 0){
        ld = temp%10;
        temp = temp/10;
        sum += round(pow(ld,count));   
    }
    if(num == sum){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}