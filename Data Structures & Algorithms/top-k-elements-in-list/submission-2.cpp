class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> bucket(n+1);

        for(auto it: mp){
            bucket[it.second].push_back(it.first);
        }

        vector<int> ans;
        
        for(int i=n;i>=0;i--){
            if(bucket[i].size() == 0) continue;

            while(bucket[i].size()>0 && k>0){
                ans.push_back(bucket[i].back());
                k--;
                bucket[i].pop_back();
            }
        }

        return ans;
    }
};
