class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low=0 ;
        int high=0 ;
        int maxi= INT_MAX;
        int sum =0 ; 
        while(high<n){
            sum += nums[high];
            while(sum>=target){
                int len = high-low+1;
                maxi= min(maxi, len);
                sum-=nums[low];
                low++;
            }  
            high++;
            
        }
        return maxi == INT_MAX ? 0 : maxi;

    }
};