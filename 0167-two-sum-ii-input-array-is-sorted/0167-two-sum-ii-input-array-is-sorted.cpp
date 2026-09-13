class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0 ; int b = nums.size()-1;
        while(nums[a]+nums[b]!=target){
            if(nums[a]+nums[b]>target){
                b--;
            }else{
                a++;
            }
        }
        return {a+1,b+1};
    }
};