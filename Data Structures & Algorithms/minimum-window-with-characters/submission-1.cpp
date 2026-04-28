class Solution {
public:
    bool checkValid(unordered_map<char, int> &ump1, unordered_map<char, int> &ump2){
        for(auto it: ump1){
            if(ump2.find(it.first) == ump2.end() || ump2[it.first]<it.second) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0;
        int si = INT_MAX;
        int start = 0;
        unordered_map<char, int> ump1;
        unordered_map<char, int> ump2;
        for(int i=0;i<m;i++) ump1[t[i]]++;
        for(int i=0;i<n;i++){
            ump2[s[i]]++;
            while(checkValid(ump1, ump2) && i>=j){
               ump2[s[j]]--;
               
               if(i-j+1<si){
               si = min(si, i - j + 1);
               start = j;
               }

               j++;
            }
        }

        return si==INT_MAX ? "" : s.substr(start, si);


    }
};
