class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        

        bool isNine = true;
        for(int i=0;i<n;i++){
            if(digits[i]!=9){
                isNine = false;
                break;
            }
        }

        if(!isNine){
        
            if(digits[n-1]!=9){
                digits[n-1]++;
            }else{
                int end = n-1;
                while(digits[end]==9){
                    digits[end] = 0;
                    end--;
                }

                digits[end]++;

            }
            return digits;
        }

        if(isNine){
            vector<int> ansarr(n+1,0);
            ansarr[0] = 1;

            return ansarr;

        }

        return digits;

        

    }
};