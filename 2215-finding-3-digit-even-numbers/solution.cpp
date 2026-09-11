class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        bool seen[1000] = {false};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(i == j || j == k || i == k){
                        continue;
                    }
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(num >= 100 && num % 2 == 0){
                        if(seen[num] == false){
                            ans.push_back(num);
                            seen[num] = true;
                        }
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
