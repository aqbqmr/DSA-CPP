class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int count = 0;
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
                            count++;
                            seen[num] = true;
                        }
                    }
                }
            }
        }
        return count;
    }
};
