class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int ans = INT_MIN;

        for(int i=0;i<n;i++){
            int count = 0;
            for(char ch: sentences[i]){
                if(ch == ' '){
                    count++;
                }
            }

            ans = max(ans,count+1);

        }

        return ans;
    }
};