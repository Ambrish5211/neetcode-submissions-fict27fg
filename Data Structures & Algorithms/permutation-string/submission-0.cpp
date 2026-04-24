class Solution {
public:
    bool checkPerm(vector<int> hash, string s1){
        for(int i=0;i<s1.size();i++){
            hash[s1[i] - 'a']--;
        }

        for(int i=0;i<26;i++){
            if(hash[i] != 0) return false;
        }

        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        
        vector<int> hash(26, 0);
        int j = 0;
        for(int i=0;i<m;i++){
            hash[s2[i] - 'a']++;
            if(i-j+1 == n){
                if(checkPerm(hash, s1)) return true;
                hash[s2[j] - 'a']--;
                j++;
            }
        }

        return false;
    }
};
