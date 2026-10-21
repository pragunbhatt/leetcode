class Solution {
public:

    int search(vector<int> arr,int target, int si,int ei){
        int mid = si + (ei-si)/2;

        if(si>ei){
            return -1;
        }
        
        if(arr[mid] == target){
            return mid;
        }

        if(arr[mid]>=arr[si]){
            if(target>=arr[si] && target<arr[mid]){
                return search(arr,target,si,mid-1);
            }else{
                return search(arr,target,mid+1,ei);
            }
        }else{
            if(target<=arr[ei] && target>arr[mid]){
                return search(arr,target,mid+1,ei);
            }else{
                return search(arr,target,si,mid-1);
            }
        }

    }

    int search(vector<int>& nums, int target) {
        return search(nums,target,0,nums.size()-1);
    }
};