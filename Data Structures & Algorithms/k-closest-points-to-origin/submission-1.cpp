class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double, int>>> maxH;
        for(int i=0;i<points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            double dist = sqrt(x*x + y*y);
            maxH.push({dist, i});

            if(maxH.size()>k) maxH.pop();
        }

        vector<vector<int>> ans;

        while(!maxH.empty()){
            ans.push_back(points[maxH.top().second]);
            maxH.pop();
        }
        return ans;
    }
};
