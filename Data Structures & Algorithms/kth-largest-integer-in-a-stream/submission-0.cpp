class KthLargest {
public:
    int kth = 0;
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            minHeap.push(nums[i]);
            if(minHeap.size()>k) minHeap.pop();
        }
        kth = k;
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size()>kth) minHeap.pop();
        return minHeap.top();
    }
};
