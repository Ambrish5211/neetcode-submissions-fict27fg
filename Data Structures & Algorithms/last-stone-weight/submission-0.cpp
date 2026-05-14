class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxH;
        for(int i=0;i<stones.size();i++){
            maxH.push(stones[i]);
        }
        int ans = 0;
        while(!maxH.empty() && maxH.size() != 1){
            int first = maxH.top(); maxH.pop();
            int second = maxH.top(); maxH.pop();
            int ans = abs(first - second);
            maxH.push(ans);
        }

        return maxH.empty() ? 0 : maxH.top();
    }
};
