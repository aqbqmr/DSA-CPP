class Solution {
public:
    bool checkDivisibility(int n) {
        int orig = n;
        int sum = 0;
        int mul = 1;
        while(n > 0){
            int digit = n % 10;
            sum += digit;
            mul *= digit;
            n /= 10;
        }
        int divisor = sum + mul;
        return (orig % divisor == 0);
    }
};
