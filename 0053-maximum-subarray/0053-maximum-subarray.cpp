class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = INT_MIN;
        int n = nums.size();
        int sum = 0;

        bool isNeg = true;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                isNeg = false;
            }
        }

        if(!isNeg){

            for(int i=0;i<n;i++){
                sum += nums[i];
                if(sum<0){
                    sum = 0;
                }

                maxSum = max(maxSum,sum);
            }

            return maxSum;

        }

        if(isNeg){
            int lar = nums[0];
            for(int i =0 ;i<n;i++){
                if(nums[i]>lar){
                    lar = nums[i];
                }
            }
            return lar;
        }

        return maxSum;

        
        
    }
};