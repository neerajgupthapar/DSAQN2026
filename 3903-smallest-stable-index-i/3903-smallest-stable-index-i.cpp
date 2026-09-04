class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n = arr.size();

        for (int end = 0; end < n; end++) {   // start from 0
            int maxi = INT_MIN;
            int mini = INT_MAX;

            // Left: 0 to end
            for (int i = 0; i <= end; i++)
                maxi = max(maxi, arr[i]);

            // Right: end to n-1
            for (int j = end; j < n; j++)
                mini = min(mini, arr[j]);

            if (maxi - mini <= k)
                return end;
        }

        return -1;
    }
};