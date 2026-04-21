// #include <iostream>
// using namespace std;
// void printReverseTriangle(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = n; j >= i; j--) {
//             cout << "* ";
//         }
//         cout << '\n';
//     }
// }
// int main() {
//     int testCases;
//     cin >> testCases;
//     for (int i = 0; i < testCases; i++) {
//         int n;
//         cin >> n;
//         printReverseTriangle(n);
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      for(int i = n-1; i > 0;i--){
//         for(int j = 1; j <= i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j <= n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j <= i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j <= i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j <= i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1; i<=t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0; i<n;i++){
//         for(int j = 0; j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1; i<=t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j <= n-i+1; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1; i<=t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j < 2*i+1; j++){
//             cout<<"* ";
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < i; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j < 2*n-(2*i+1); j++){
//             cout<<"* ";
//         }
//         for(int j = 0; j < i; j++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j < 2*i+1; j++){
//             cout<<"* ";
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < i; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j < 2*n-(2*i+1); j++){
//             cout<<"* ";
//         }
//         for(int j = 0; j < i; j++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j < 2*i+1; j++){
//             cout<<"* ";
//         }
//         for(int j = 0; j < n-i-1; j++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
//     for(int i = 1; i < n;i++){
//         for(int j = 0; j < i; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j < 2*n-(2*i+1); j++){
//             cout<<"* ";
//         }
//         for(int j = 0; j < i; j++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t;i++){
//         int n;
//         cin>>n;
//         print(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j <= i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i = n-1; i > 0;i--){
//         for(int j = 1; j <= i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }
// // // second metho....................
// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i = 1;i<=2*n-1;i++){
//         int star = i;
//         if(i>n) star = 2*n-i;
//         for(int j = 1; j<=star; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// void print01(int n){
//     int start;
//     for(int i=0;i<n;i++){
//             if(i%2==0) start=1;
//                 else start=0;
//             for(int j = 0; j <= i; j++){
//                 cout<<start<<" ";
//                 start = 1 - start;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1; i<=t;i++){
//         int n;
//         cin>>n;
//         print01(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void printKaroPattern(int n){
//     int space = 2*(n-1);
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<j<<" ";
//         }
//         for(int j=1; j<=space;j++){
//             cout<<"  ";
//         }
//         for(int j = i; j >= 1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//         space-=2;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n;
//         cin>>n;
//         printKaroPattern(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(i+64)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<char(j+64)<<" ";
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }        
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         int ch = 1;
//         for(int j=1;j<=2*i-1;j++){
//                 cout<<char(ch+64)<<" ";
//                 if(i>j) ch++;
//                 else ch--;
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }        
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }


// #include<iostream>
// using namespace std;
// void print1tonTri(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n-i+1;j<=n;j++){
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print1tonTri(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print19(int n){
//     int iniSpc = 0;
//     for(int i=0; i<=n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<"* ";
//         }
//         for(int j=0; j<iniSpc; j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<=n-i;j++){
//             cout<<"* ";
//         }
//         iniSpc+=2;
//         cout<<endl;
//     }
//     iniSpc = 8;
//     for(int i=1; i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         for(int j=0; j<iniSpc; j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         iniSpc-=2;
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1; i<=t; i++){
//         int n;
//         cin>>n;
//         print19(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print20(int n){
//     int inispc = 2*n-1;
//     for(int i=0; i<=2*n-1;i++){
//         int star = i;
//         if(i>n) star = 2*n-i; 
//         for(int j=0;j<=star;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<=inispc;j++){
//             cout<<"  ";
//         }
//         for(int j=0; j<=star; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//         if(i<n) inispc -= 2;
//         else inispc += 2;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1; i<=t; i++){
//         int n;
//         cin>>n;
//         print20(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print21(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || i==n-1 || j==0 || j==n-1){
//                 cout<<"* ";
//             } 
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1; i<=t; i++){
//         int n;
//         cin>>n;
//         print21(n);
//     }
// }

// #include<iostream>
// using namespace std;
// void print21(int n){
//     for(int i=0;i<2*n-1;i++){
//         for(int j=0;j<2*n-1;j++){
//             int top = i;
//             int left = j;
//             int right = (2*n-1)-1-j;
//             int down = (2*n-1)-1-i;
//             cout<<(n-min(min(top,down),min(left,right)))<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1; i<=t; i++){
//         int n;
//         cin>>n;
//         print21(n);
//     }
// }
