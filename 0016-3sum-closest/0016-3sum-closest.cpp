class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest= nums[0]+ nums[1] + nums[2];
        int n = nums.size()-1;
        for(int i =0 ; i < nums.size()-2 ; i++){
            int j = i+1;
            int k = n;

            while(j<k){
                int sum = nums[i]+ nums[j] + nums[k];
                if (abs(target - sum) < abs(target - closest)){
                    closest =sum;
                }
                if(sum<target){
                    j++;
                }else if(sum>target){
                    k--;
                }else{
                    return sum;
                }
            }
        }
        return closest;
    }
};