class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i= k ; ; i+=k){
            bool f=false;

            for(int num : nums){
                if(num==i){
                    f= true;
                    break;
                }
            }

            if(!f){
                return i;
            }
        }
        return -1;
    }
};