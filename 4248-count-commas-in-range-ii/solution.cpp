class Solution {
public:
    long long countCommas(long long n) {
        long long power = 1000;
        long long sum = 0;
        while(power <= n){
            sum += n - power + 1;
            power *= 1000;
        }
        return sum;
    }
};
