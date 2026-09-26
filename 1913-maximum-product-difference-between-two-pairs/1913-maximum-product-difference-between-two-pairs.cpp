class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int n = nums.size();

        for(int i=1;i<n;i++){

            bool isSwap = false;

            for(int j=0;j<(n-i);j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1] = temp;

                    isSwap = true ;

                }
            }

            if(!isSwap){
                break;
            }
        }

        return (nums[n-1]*nums[n-2]) - (nums[0]*nums[1]);
    }
};