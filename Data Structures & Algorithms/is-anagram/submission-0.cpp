class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> s_hash(26, 0);
        vector<int> t_hash(26, 0);
        for(int i=0;i<n;i++){
            s_hash[s[i] - 'a']++;
        }
        for(int j=0;j<m;j++){
            t_hash[t[j] - 'a']++;
        }

        for(int i=0;i<26;i++){
            if(s_hash[i] != t_hash[i]) return false;
        }
        return true;
    }
};
