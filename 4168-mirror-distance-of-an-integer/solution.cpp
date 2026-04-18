class Solution {
public:
    int mirrorDistance(int n) {
        int orignal = n;
        long rev = 0;
        while(n!=0){
            int ld = n%10;
            rev = (rev*10)+ld;
            n/=10;
        }
        if(rev > INT_MAX || rev < INT_MIN) return 0;
        return abs(orignal - (int)rev);
    }

};
