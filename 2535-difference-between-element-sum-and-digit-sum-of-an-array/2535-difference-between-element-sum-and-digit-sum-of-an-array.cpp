class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();

        int elSum = 0;
        int digSum = 0;

        for(int i =0;i<n;i++){
            elSum += nums[i];

            int num = nums[i];
            while(num!=0){
                int lasDigit = num%10;
                digSum += lasDigit;
                num /= 10;
            }

        }

        int ans = elSum - digSum;
        if(ans<0){
            ans *= -1;
        }

        return ans;
    }
};