class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' ' && iswalnum(s[i])){
                t.push_back(tolower(s[i]));
            }
        }
        cout<<t;
        int i = 0, j = t.size()-1;
        while(i<j){
            if(t[i] != t[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
