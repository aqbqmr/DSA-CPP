class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(!isTriangle(nums)) return "none";
        if(isEquilateral(nums)) return "equilateral";
        if(isIsosceles(nums)) return "isosceles";
        return "scalene";
    }
    private:
        bool isTriangle(vector<int>& nums){
            return (nums[0]+nums[1]) > nums[2] &&
                   (nums[1]+nums[2]) > nums[0] &&
                   (nums[0]+nums[2]) > nums[1]; 
        }
        bool isEquilateral(vector<int>& nums){
            return nums[0] == nums[1] && nums[1] == nums[2];
        }
        bool isIsosceles(vector<int>& nums){
            return (nums[0]==nums[1] || nums[1]==nums[2]) || nums[2]==nums[0];
        }
};
