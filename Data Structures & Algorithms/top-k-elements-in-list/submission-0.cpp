class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> pr;

        for(auto it: mp){
            pr.push_back({it.second, it.first});
        }

        sort(pr.begin(), pr.end(), greater<pair<int, int>>());
        
        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(pr[i].second);

        return ans;


    }
};
