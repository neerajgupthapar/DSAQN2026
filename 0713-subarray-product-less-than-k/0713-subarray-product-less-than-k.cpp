class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int n = nums.size();
        int low= 0 ; 
        int high =0 ;
        int pdt=1;
        long long int count=0;
        while(high<n){
            pdt*=nums[high];
            while(pdt>=k){
            pdt /= nums[low];
            low++;
        }
            count += high - low + 1;
            high++;
        }
        return count;
    }
};