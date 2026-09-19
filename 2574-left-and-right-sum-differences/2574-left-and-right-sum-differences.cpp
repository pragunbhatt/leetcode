class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);

        for(int i=0;i<n;i++){
            for(int j = 0;j<i;j++){
                leftSum[i] += nums[j];
            }
            for(int k = i+1;k<n;k++){
                rightSum[i] += nums[k];
            }
        }

        leftSum[0] = 0;
        rightSum[n-1] = 0;

        vector<int> ans(n,0);

        for(int i =0;i<n;i++){
            int diff = leftSum[i] - rightSum[i];
            if(diff<0){
                diff *= -1;
            }

            ans[i] = diff;
        }

        return ans;

    }
};