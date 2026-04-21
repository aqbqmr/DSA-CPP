// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//         while(n>0){
//         int lasDig = n%10;
//         count++;
//         n=n/10;
//     }
//     cout<<count;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int revNum = 0;
//     while (n > 0)
//     {
//         int lasDig = n % 10;
//         n = n / 10;
//         revNum = (revNum * 10) + lasDig;
//     }
//     cout << revNum;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int revNum = 0;
//     while (n > 0)
//     {
//         int lasDig = n % 10;
//         n = n / 10;
//         cout<<lasDig<<endl;
//         revNum = (revNum * 10) + lasDig;
//     }
//     cout << revNum;
// }


// Armstrong Number...
#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count = 0;
    int sum = 0;
    int temp = num;
    while(temp > 0){
        temp /= 10;
        count++;
    } 
    temp = num;
    while(temp>0) {
        int ld = temp % 10;
        temp /= 10;
        sum += round(pow(ld,count));
    }
    if(num == sum){
        cout<<"yes";
    }else{
        cout<<"No";
    }
}