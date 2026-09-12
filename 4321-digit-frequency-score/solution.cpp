class Solution {
public:
    int digitFrequencyScore(int n) {
        int hash[10] = {0};
        int copy = n;
        while(copy != 0){
            hash[copy % 10]++;
            copy /= 10;
        }
        int sum = 0;
        for(int i = 1; i < 10; i++){
            sum += i*hash[i];
        }
    return sum;
    }
};



// class Solution {
// public:
//     int digitFrequencyScore(int n) {
//         int sum = 0;
//         while(n > 0){
//             int digits = n % 10;
//             sum += digits;
//             n /= 10;
//         }
//         return sum;
//     }
// };
