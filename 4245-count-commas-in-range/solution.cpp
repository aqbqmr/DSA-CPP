// class Solution {
// public:
//     int countCommas(int n) {
//         int count = 0;
//         int temp = n;
//         while(temp > 0){
//             temp /= 10;
//             count++;
//         }
//         if(count <= 3){
//             return 0;
//         }
//         return (n - 1000) + 1;
//     }
// };


// class Solution {
// public:
//     int countCommas(int n) {
//         if(n < 1000){
//             return 0;
//         }
//         return (n - 1000) + 1;
//     }
// };



class Solution {
public:
    int countCommas(int n) {
        int ans = 0;
        int power = 1000;
        while(power <= n){
            ans += n - power + 1;
            power *= 1000;
        }
        return ans;
    }
};
