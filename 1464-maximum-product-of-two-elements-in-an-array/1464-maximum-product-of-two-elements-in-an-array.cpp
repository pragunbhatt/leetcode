class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int lar = INT_MIN;

        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                lar = max(lar,((nums[i]-1)*(nums[j]-1)));
            }
        }

        return lar;
    }
};