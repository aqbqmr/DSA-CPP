class Solution {
public:
    bool isPowerOfTwo(int n) {
        // //Bit-Manipulation...
        // if(n < 0) return false;
        // return (n & (n-1)) == 0;

        //Division Approach...
        if(n<=0) return false;
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};
