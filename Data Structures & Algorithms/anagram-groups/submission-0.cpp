class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> ump;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            vector<int> hash(26, 0);
            for(int j=0;j<strs[i].size();j++){
                hash[strs[i][j]-'a']++;
            }
            string t;
            for(int i=0;i<26;i++){
                    while(hash[i]>0){
                        t.push_back(i+'a');
                        hash[i]--;
                    }
            }
            ump[t].push_back(strs[i]);
        }

        for(auto it: ump){
            ans.push_back(it.second);
        }
        return ans;
    }
};
