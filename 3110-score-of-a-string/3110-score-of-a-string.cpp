class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i<(s.length()-1);i++){
            int currDiff = s[i] - s[i+1];
            if(currDiff<0){
                currDiff *= -1;
            }
            sum += currDiff;
        }

        return sum;
    }
};