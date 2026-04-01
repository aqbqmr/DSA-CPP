// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     int y;
//     cin>>x;
//     cin>>y;
//     int z = x + y;
//     cout<<"Sum is "<<z;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hey Aaquib!"<<endl;
//     cout<<"Hey Aaquib!"<<endl;
//     cout<<"Hey Aaquib!"<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x ,y;
//     cin>>x>>y;
//     cout<<"Value of x: "<<x<<" and y: ";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s1,s2,s3;
//     cin>>s1>>s2>>s3;
//     cout<<s1<< " "<<s2<< " "<<s3;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin, str);
//     cout<<str;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if(age >= 18){
//         cout<<"You are Eligible for The vote....";
//     } else{
//         cout<<"You are not eligible for the vote";
//     }   
// }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int marks;
// //     cin>>marks;
// //     if(marks > 100 && marks <= 80){
// //         cout<<"Your Grade is: A";
// //     } else if(marks < 80 && marks >= 60){
// //         cout<<"Your Grade is: B";
// //     } else if(marks < 60 && marks >= 50){
// //         cout<<"Your Grade is: C";
// //     } else if(marks < 50 && marks >= 45){
// //         cout<<"Your Grade is: D";
// //     } else if(marks < 45 && marks >= 25){
// //         cout<<"Your Grade is: E";
// //     } else if(marks < 25){
// //         cout<<"Your Grade is: F";
// //     }
// // }
// // More Optimised.................................................................
// #include<iostream>
// using namespace std;
// int main() {
//     int marks;
//     cin >> marks;
//     if(marks < 25) {
//         cout << "F";
//     }
//     else if(marks <= 44) {
//         cout << "E";
//     }
//     else if(marks <= 49) {
//         cout << "D";
//     }
//     else if(marks <= 59) {
//         cout << "C";
//     }
//     else if(marks <= 79) {
//         cout << "B";
//     }
//     else if(marks <= 100) {
//         cout << "A";
//     }
//     return 0;
// }

// // // Take age as input
// // If age < 18
// //     Print "Not eligible for job"
// // Else if age >= 18 and age <= 54
// //     Print "Eligible for job"
// // Else if age >= 55 and age <= 57
// //     Print "Eligible for job, but retirement soon"
// // Else
// //     Print "Retirement time"
// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cin>>age;
//     if(age < 18){
//         cout<<"Not Eligible for JOB";
//     } else if(age <= 54){
//         cout<<"Eligible for JOB";
//     } else if(age <= 57){
//         cout<<"Eligible for JOB ";
//         if(age >= 55){
//             cout<<" but, Retirement soon";
//         }
//     }
//     else{
//         cout<<"Retirement time";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cin>>day;
//     switch (day){
//     case 1:
//     cout<<"Monday";
//         break;
//     case 2:
//     cout<<"Tuesday";
//         break;
//     case 3:
//     cout<<"Wednesday";
//         break;
//     case 4:
//     cout<<"Thursday";
//         break;
//     case 5:
//     cout<<"Friday";
//         break;
//     case 6:
//     cout<<"Saturday";
//         break;
//     case 7:
//     cout<<"Sunday";
//         break;
//     default:
//     cout<<"Plz enter between (1-8): ";
//         break;
//     }
//     cout<<endl<<"Checked ☑️";
// }

// // Array.......(1-D)................
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<sizeof(arr)/4;i++){
//         cin>>arr[i];
//     }
//     cout<<arr[3];
// }

// // Array.......(2-D)................
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][4];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<arr[2][1];
// }

// // String..........................
// #include<iostream>
// using namespace std;
// int main(){
//     string s = "Aaquib";
//     int len = s.size();
//     cout<<s[len - 1]<<endl;
//     s[0] = 'S';
//     s[len - 1] = 'f';
//     cout<<s[0]<<endl;
//     cout<<s<<endl;
//     cout<<len<<endl;
// }

// // Loops.....................
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         cout<<i<<". ";
//         cout<<"Aaquib "<<endl;
//     }
//     cout<<i;
// }

// // Loops.....................
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     while(i<=10){
//         cout<<i<<". ";
//         cout<<"Aaquib "<<endl;
//         i++;
//     }
// }

// // Loops.....................
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 2;
//     do{
//         cout<<i<<". ";
//         cout<<"Aaquib "<<endl;
//         i++;
//     }
//     while(i<=1);
//     cout<<i<<" ";
// }

// // Function..........................
// #include<iostream>
// using namespace std;
// void printName(){
//     cout<<"Hey Aaquib"<<endl;
// }
// int main(){
//     string name;
//     printName();
// }

// // Function..........................
// #include<iostream>
// using namespace std;
// void printName(string meow){
//     cout<<"Hey "<<meow<<endl;
// }
// int main(){
//     string name1;
//     cin>>name1;
//     printName(name1);
//     // Second Variable...........
//     string name2;
//     cin>>name2;
//     printName(name2);
// }

// // sum with return Function..............
// #include<iostream>
// using namespace std;
// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int res = sum(num1,num2);
//     cout<<res;
// }

// // sum without return Function...........
// #include<iostream>
// using namespace std;
// void sum(int num1, int num2){
//     int num3 = num1 + num2;
//     cout<<num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     sum(num1,num2);
// }

// // This is Built in function.............
// #include<iostream>
// using namespace std;
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int mx = max(num1,num2);
//     cout<<mx;
// }

// // Now Write a code yourself to find maximum Number...............
// #include<iostream>
// using namespace std;
// int maxx(int num1, int num2){
//     if(num1 >= num2) return num1;
//     else return num2;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int mx = maxx(num1,num2);
//     cout<<mx;
// }

// // Now Pass by value................................
// #include<iostream>
// using namespace std;
// void doSomething(int num){
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout<<num<<endl;
// }

// #include<iostream>
// using namespace std;
// int doSomething(int num){
//     cout << num << endl;   // 10
//     num += 5;
//     cout << num << endl;   // 15
//     num += 5;
//     cout << num << endl;   // 20
//     num += 5;
//     cout << num << endl;   // 25
//     num += 5;
//     cout << num << endl;   // 30
//     return num;
// }
// int main(){
//     int num = 10;
//     int result = doSomething(num);
//     cout << "Final: " << result << endl;
//     cout << "Original: " << num << endl;
// }

// // Now Pass by value................................
// #include<iostream>
// using namespace std;
// void doSomething(string s){
//     s[0]='S';
//     cout<<s<<endl;
// }
// int main(){
//     string s = "Aauib";
//     doSomething(s);
//     cout<<s<<endl;
// }

// // Pass by reference..............................
// #include<iostream>
// using namespace std;
// void doSomething(int &num){
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout<<num<<endl;
// }

// // Now Pass by Reference................................
// #include<iostream>
// using namespace std;
// void doSomething(string &s){
//     s[0]='S';
//     cout<<s<<endl;
// }
// int main(){
//     string s = "Aauib";
//     doSomething(s);
//     cout<<s<<endl;
// }

// // Array function......Array itself is Pass by reference................
// #include<iostream>
// using namespace std;
// void doSomething(int arr[], int n){
//     arr[0] += 100;
//     cout<<"Value inside the Function: "<< arr[0] <<endl;
// }
// int main(){
//     int n = 5;
//     int arr[5];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     doSomething(arr, n);
//     cout<<"Value inside int main: "<< arr[0] <<endl;
// }

