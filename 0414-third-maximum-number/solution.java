class Solution {
    public int thirdMax(int[] nums) {
        Set<Integer> max = new TreeSet<>();
        for(int i = 0; i < nums.length; i++){
            max.add(nums[i]);
        }
        ArrayList<Integer> arr = new ArrayList<>(max);
        if(arr.size() <= 2) return arr.get(arr.size() - 1);
        if(arr.size() == 3) return arr.get(0);
        return arr.get(arr.size()-3);
    }
}
