class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int count = k;
        string ans = "";

        for(int i=0;i<n;i++){
            if(s[i]== ' '){
                count--;
            }
            if(count == 0){
                break;
            }
            ans += s[i];
        }

        return ans;
    }
};