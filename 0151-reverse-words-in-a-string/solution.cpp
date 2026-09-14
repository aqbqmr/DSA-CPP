
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        reverse(s.begin(), s.end());
        for(int i = 0; i < n; i++){
            string word = "";
            while(i < n && s[i] != ' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if(word.size() > 0){
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};




// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(), s.end());
//         int l = 0;
//         int r = 0;
//         int n = s.size();
//         int i = 0;
//         while(i < n){
//             while(i < n && s[i] != ' '){
//                 s[r++] = s[i++];
//             }
//             if(l < r){
//                 reverse(s.begin()+l, s.begin()+r);
//                 s[r] = ' ';
//                 r++;
//                 l = r;
//             }
//             i++;
//         }
//         s = s.substr(0, r-1);   
//         return s;
//     }
// };
