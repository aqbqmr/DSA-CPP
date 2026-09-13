class Solution {
public:
    int strStr(string str, string tar) {
        int n = str.length();
        int m = tar.length();
        if(m > n) return -1;
        if(m == 0) return 0;
        for(int i = 0; i < n; i++){
            if(str.substr(i, m) == tar){
                return i;
                }
            }
        return -1;
    }
};



// This is two-pointer solution...................
// class Solution {
// public:
//     int strStr(string str, string tar) {
//         int n = str.length();
//         int m = tar.length();
//         if(m > n) return -1;
//         if(m == 0) return 0;
//         for(int i = 0; i < n; i++){      // we can also write this (i < n) only but wanted to remove iteration
//             int j = 0;
//             while(j < m && str[i+j] == tar[j]){
//                 j++;
//             }
//             if(j == m){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
