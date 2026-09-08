class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> runningSum(n,0);
        runningSum[0] = nums[0];

        for(int i=1;i<n;i++){
            runningSum[i] = runningSum[i-1] + nums[i];
        }

        return runningSum;
        
    }
};