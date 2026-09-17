class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int maxVowel = 0;
        int l = 0;
        int r = k;
        for(int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') maxVowel++;
        }
    int count = maxVowel;
        while(r < n){
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') count--;
            if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u') count++;
            l++; 
            r++;
            maxVowel = max(count, maxVowel);
        }
        return maxVowel;
    }
};
