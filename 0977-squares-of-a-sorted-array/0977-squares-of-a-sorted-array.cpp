class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int > vtr(n);
        int i=0 ;
        int j=nums.size()-1;
        int k = nums.size()-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                vtr[k]=nums[i]*nums[i];
                i++;
            }else{
                vtr[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return vtr;
    }

};