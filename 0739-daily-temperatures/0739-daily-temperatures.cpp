class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int > st;
        vector <int > vtr(arr.size(), 0);
        for(int i=0 ; i<arr.size() ; i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                vtr[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }

        return vtr;
    }
};