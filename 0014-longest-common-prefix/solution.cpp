class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        int n = strs.size();
        string ans = "";
        string first = strs[0];
        for(int i = 0; i < first.size(); i++){
            char s = first[i];
            for(int j = 1; j < n; j++){
                if(s != strs[j][i]){
                    return ans;
                }
            }
            ans += s;
        }
        return ans;
    }
};




// from this question my Mind is Totally fucked up... //My solution is submittted but here is a catch??? 
// if u get this then your logic is strong.....
