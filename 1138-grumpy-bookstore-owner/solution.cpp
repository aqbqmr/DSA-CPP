class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int m = grumpy.size();
        int satisfied = 0;
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0){
                satisfied += customers[i];
            }
        }
        for(int i = 0; i < minutes; i++){
            if(grumpy[i] == 1){
                temp += customers[i];
            }
        }
        int extra = temp;
        for(int i = minutes; i < n; i++){
            if(grumpy[i - minutes] == 1) temp -= customers[i - minutes];
            if(grumpy[i] == 1) temp += customers[i];
            extra = max(temp, extra);
        }
        return satisfied + extra;
    }
};
