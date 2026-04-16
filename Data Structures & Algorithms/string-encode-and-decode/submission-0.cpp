class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(int i=0;i<strs.size();i++){
            int s = strs[i].size();
            encoded = encoded + to_string(s) + '#' + strs[i];
        }
        cout<<encoded;
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        while(i<s.size()){
            string temp;
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int sze = stoi(s.substr(i, j-i));
            temp = s.substr(j+1, sze);
            decoded.push_back(temp);
            i = j+1+sze;
        }
        return decoded;
    }
};
