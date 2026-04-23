class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> ump;
        int j = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            ump[s[i] - 'a']++;
            while(ump[s[i]-'a']>1){
                ump[s[j] - 'a']--;
                j++;
            }
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};
