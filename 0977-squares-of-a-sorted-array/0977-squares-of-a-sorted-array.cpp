class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i =0 ; i< nums.size() ; i++){
            nums[i]=nums[i]*nums[i];
        }
        int n = nums.size();
        for(int i =0 ; i<n-1 ; i++){
            for(int j =i+1 ; j<n ; j++){
                if(nums[i]>nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
    }
};