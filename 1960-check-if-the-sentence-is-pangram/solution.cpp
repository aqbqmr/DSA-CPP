class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> hash;
        int s = sentence.size();
        for(int i = 0; i < s; i++){
            hash[sentence[i]]++;
        }
        for(char ch = 'a'; ch <= 'z'; ch++){
            if(hash[ch] == 0 ) return false;
        }
        return true;
    }
};
