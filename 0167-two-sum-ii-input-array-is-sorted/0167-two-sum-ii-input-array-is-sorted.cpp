class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n=numbers.size();
        vector<int> ans(2,0);

        int left = 0;
        int right = n-1;

        while(left<right){
            int sum = numbers[left] + numbers[right];

            if(sum==target){
                ans[0] = left+1;
                ans[1] = right +1;
                break;
            }else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        return ans;
        
    }
};