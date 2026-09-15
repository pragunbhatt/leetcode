class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        int start=0;
        int end = n-1;
        int mid=0;
        bool isfound = false;

        if(target<nums[0]){
            return 0;
        }

        if(target>nums[n-1]){
            return n;
        }

        while(start<=end){
            mid = (start+end)/2;

            if(nums[mid]==target){
                isfound = true;
                break;
            }else if(target>nums[mid]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        int finalans=0;
        
        if(isfound){
            finalans = mid;
        }else{
            for(int i=0;i<n;i++){
                if(target>nums[i] && target<nums[i+1]){
                    finalans = i+1;
                }
            }
        }

        return finalans;
        
    }
};