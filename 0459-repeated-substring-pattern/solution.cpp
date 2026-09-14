class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for(int i = n/2; i >= 1; i--){
            if(n % i == 0){
                int noOfTimes = n / i;
                string subString = s.substr(0, i);
                string newString  = "";
                while(noOfTimes--){
                    newString += subString;
                }
                if(newString == s) return true;
            }
        }
        return false;
    }
};



// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         int n = s.length();
//         for(int i = 1; i <= n/2; i++){
//             if(n % i == 0){
//                 int noOfTimes = n / i;
//                 string subString = s.substr(0, i);
//                 string newString  = "";
//                 while(noOfTimes--){
//                     newString += subString;
//                 }
//                 if(newString == s) return true;
//             }
//         }
//         return false;
//     }
// };
