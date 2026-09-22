class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0 ; 
        int j =0 ;
        int sum_prev=0;
        int length=INT_MAX;
        while(j< nums.size()){
            sum_prev+=nums[j];
            while(sum_prev>=target){
                length=min(length,(j-i)+1);
                sum_prev-=nums[i];
                i++;
            }
            j++;
        }
        if(length==INT_MAX){
            return 0;
        }
        return length;
    }
};