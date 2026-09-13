class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int , int > mp ; 
        for(int i =0 ; i<nums.size() ; i++){
            mp[nums[i]]=i;
        }
        for(int i =0 ; i<nums.size() ; i++){
            int rem= target-nums[i];

            auto j = mp.find(rem);

            if(j!=mp.end() && j->second != i){
                return {i+1,j->second+1};
            }
        }
        return {-1};
    }
};