class Solution {
public:
    int findMax(vector<int> &hash){
        int maxi = 0;
        for(auto it: hash){
            maxi = max(maxi, it);
        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
      int n = s.size();
      vector<int> hash(26, 0);  
      int i=0, j=0;
      int maxFreq = 0;
      int ans = 0;
      while(i<n){
        hash[s[i] - 'A']++;
        maxFreq = max(maxFreq, hash[s[i] - 'A']);
        while(i-j+1-maxFreq>k){
            hash[s[j] - 'A']--;
            maxFreq = findMax(hash);
            j++;
        }
        ans = max(ans, i-j+1);
        i++;
      }
      return ans;
    }
};
