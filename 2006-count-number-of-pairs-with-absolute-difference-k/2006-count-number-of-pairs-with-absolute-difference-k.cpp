class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = nums[i] - nums[j];
                if(diff<0){
                    diff *= -1;
                }

                if(diff == k){
                    count++;
                }
            }
        }

        return count;
    }
};