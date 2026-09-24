class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();

        int end = n-1;

        while(true){
            if(num[end]=='0'){
                end--;
            }else{
                break;
            }
            
        }

        string ans = "";

        for(int i=0;i<=end;i++){
            ans += num[i];
        }

        return ans;
    }
};