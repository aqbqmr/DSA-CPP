class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for(int i = 0; i < sentences.size(); i++){
            int currCount = 0;
            for(int j = 1; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    currCount++;
                }
            }
            maxCount = max(currCount, maxCount);
        }
        return maxCount+1;
    }
};
