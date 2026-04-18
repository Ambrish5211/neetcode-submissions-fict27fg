class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int ans = 0;
        for(auto it: st){
            int el = it;
            if(st.find(el-1) == st.end()){
                int count  = 0;
                while(st.find(el) != st.end()){
                    count++;
                    ans = max(ans, count);
                    el++;
                }
            }
        }
        return ans;
    }
};