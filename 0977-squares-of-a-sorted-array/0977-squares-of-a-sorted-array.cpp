class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            ans[i] = nums[i]*nums[i];
        }

        for(int i=1;i<n;i++){

            bool isSwap = false;

            for(int j=0;j<(n-i);j++){
                if(ans[j]>ans[j+1]){
                    int temp = ans[j];
                    ans[j]=ans[j+1];
                    ans[j+1] = temp;

                    isSwap = true ;

                }
            }

            if(!isSwap){
                break;
            }
        }

        return ans;
    }
};