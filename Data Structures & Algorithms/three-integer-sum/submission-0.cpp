class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for(int i = 0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum == 0) ans.insert({nums[i], nums[j], nums[k]});
                }
            }
        }
        return vector<vector<int>> (ans.begin(), ans.end());
    }
};



// -4, -1, -1, 0, 1, 2