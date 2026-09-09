class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++){

            if(nums[i]==0){
                continue;
            }else{
                int num = nums[i];
                int count =0;
                while(num!=0){
                    num = num/10;
                    count ++;
                }

                if(count%2==0){
                    ans++;
                }
            }

        }
        return ans;
    }
};