class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> preProd(n, 1);
        vector<int> sufProd(n, 1);
        preProd[0] = nums[0];
        sufProd[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            preProd[i] = nums[i]*preProd[i-1];
        }

        for(int i=n-2;i>=0;i--){
            sufProd[i] = nums[i]*sufProd[i+1];
        }

        vector<int> ans(n, 1);

        for(int i=0;i<n;i++){
            if(i-1<0) ans[i] = sufProd[i+1];
            else if(i+1>=n) ans[i] = preProd[i-1];
            else
            ans[i] = preProd[i-1] * sufProd[i+1];
        }

        return ans;
    }
};
