class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long rev = 0;
        int orignal = x;

        while(x>0){
            int lastDigit = x % 10;
            x/=10;
            rev = (rev * 10) + lastDigit;
        }
        return rev == orignal;
    }
};
