class Solution {
public:
    bool bsearch(vector<int> &row, int target){
        int l = 0, r = row.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(row[mid] == target) return true;
            else if(row[mid]<target) l = mid+1;
            else r = mid -1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int t = 0;
        int b = n-1;
        while(t<=b){
            int mid = t + (b-t)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][m-1]){
                return bsearch(matrix[mid], target);
            }else if(target<matrix[mid][0]) b = mid-1;
            else t = mid+1;
        }
        return false;
    }
};
