class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();

        for(int i=0;i<n;i++){
            int len = words[i].length();
            int start = 0;
            int end = len-1;
            bool isPalindrome = true;

            while(start<end){
                if(words[i][start] != words[i][end]){
                    isPalindrome = false;
                    break;
                }
                start++;
                end--;
            }

            if(isPalindrome){
                return words[i];
            }
        }

        return "";
    }
};