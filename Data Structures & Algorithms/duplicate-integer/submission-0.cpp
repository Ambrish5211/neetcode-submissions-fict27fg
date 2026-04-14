class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for(auto it:nums){
            ump[it]++;
            if(ump[it] > 1) return true;
        }
        return false;
    }
};